// Copyright fibjs. All rights reserved.
// Polyfills for C++20 standard library features that may not be available
// in older libstdc++ versions.

#ifndef V8_PATCH_STD_POLYFILL_H_
#define V8_PATCH_STD_POLYFILL_H_

#include <std_config.h>

#include <algorithm>
#include <cstring>
#include <iterator>
#include <memory>
#include <span>
#include <type_traits>

// Provide std::forward_iterator concept and std::ranges if not available
#ifdef HAVE_STD_RANGES
#include <ranges>
#else
namespace std {
template <typename I>
concept forward_iterator =
    std::is_base_of_v<std::forward_iterator_tag,
                      typename std::iterator_traits<I>::iterator_category>;

namespace ranges {
// Polyfill for std::ranges::find_if
template <typename Range, typename Pred>
auto find_if(Range&& range, Pred pred) {
  return std::find_if(std::begin(range), std::end(range), pred);
}

// Polyfill for std::ranges::max_element
template <typename Range, typename Comp>
auto max_element(Range&& range, Comp comp) {
  return std::max_element(std::begin(range), std::end(range), comp);
}

template <typename Range>
auto max_element(Range&& range) {
  return std::max_element(std::begin(range), std::end(range));
}
}  // namespace ranges

}  // namespace std
#endif

// Provide std::strong_ordering if <compare> is not available
#if !defined(__cpp_lib_three_way_comparison) || \
    __cpp_lib_three_way_comparison < 201907L
#include <compare>
#endif

// Check if std::bit_cast is available (C++20 feature)
#ifdef HAVE_STD_BIT_CAST
#include <bit>
#elif defined(__has_builtin) && __has_builtin(__builtin_bit_cast)
// Use compiler builtin for constexpr bit_cast
namespace std {
template <typename To, typename From>
constexpr typename std::enable_if<sizeof(To) == sizeof(From) &&
                                      std::is_trivially_copyable<From>::value &&
                                      std::is_trivially_copyable<To>::value,
                                  To>::type
bit_cast(const From& src) noexcept {
  return __builtin_bit_cast(To, src);
}
}  // namespace std
#else
// Provide a fallback implementation of std::bit_cast for older compilers
// Note: This version is not constexpr
namespace std {
template <typename To, typename From>
typename std::enable_if<sizeof(To) == sizeof(From) &&
                            std::is_trivially_copyable<From>::value &&
                            std::is_trivially_copyable<To>::value,
                        To>::type
bit_cast(const From& src) noexcept {
  static_assert(std::is_trivially_constructible<To>::value,
                "Destination type must be trivially constructible");
  To dst;
  std::memcpy(&dst, &src, sizeof(To));
  return dst;
}
}  // namespace std
#endif

// Check if std::make_unique_for_overwrite is available (C++20 feature)
#ifndef HAVE_STD_MAKE_UNIQUE_FOR_OVERWRITE
namespace std {
// Helper trait for unbounded array detection (C++20 std::is_unbounded_array)
#if !defined(__cpp_lib_bounded_array_traits) || \
    __cpp_lib_bounded_array_traits < 201902L
template <typename T>
struct is_unbounded_array : std::false_type {};
template <typename T>
struct is_unbounded_array<T[]> : std::true_type {};
#endif

template <typename T>
typename std::enable_if<!std::is_array<T>::value, std::unique_ptr<T>>::type
make_unique_for_overwrite() {
  return std::unique_ptr<T>(new T);
}

template <typename T>
typename std::enable_if<is_unbounded_array<T>::value, std::unique_ptr<T>>::type
make_unique_for_overwrite(std::size_t n) {
  return std::unique_ptr<T>(new typename std::remove_extent<T>::type[n]);
}
}  // namespace std
#endif

// Polyfill for std::to_array (C++20 feature)
#ifndef HAVE_STD_TO_ARRAY
#include <array>
#include <utility>
namespace std {
namespace detail {
template <class T, std::size_t N, std::size_t... I>
constexpr std::array<std::remove_cv_t<T>, N> to_array_impl(
    T (&a)[N], std::index_sequence<I...>) {
  return {{a[I]...}};
}
}  // namespace detail

template <class T, std::size_t N>
constexpr std::array<std::remove_cv_t<T>, N> to_array(T (&a)[N]) {
  return detail::to_array_impl(a, std::make_index_sequence<N>{});
}

template <class T, std::size_t N>
constexpr std::array<std::remove_cv_t<T>, N> to_array(T (&&a)[N]) {
  return detail::to_array_impl(a, std::make_index_sequence<N>{});
}
}  // namespace std
#endif

#endif  // V8_PATCH_STD_POLYFILL_H_
