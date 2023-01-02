typedef long long di_int;
#define CHAR_BIT sizeof(char)

extern di_int __mulodi4(di_int a, di_int b, int* overflow)
{
    const int N = (int)(sizeof(di_int) * CHAR_BIT);
    const di_int MIN = (di_int)1 << (N - 1);
    const di_int MAX = ~MIN;
    *overflow = 0;
    di_int result = a * b;
    if (a == MIN) {
        if (b != 0 && b != 1)
            *overflow = 1;
        return result;
    }
    if (b == MIN) {
        if (a != 0 && a != 1)
            *overflow = 1;
        return result;
    }
    di_int sa = a >> (N - 1);
    di_int abs_a = (a ^ sa) - sa;
    di_int sb = b >> (N - 1);
    di_int abs_b = (b ^ sb) - sb;
    if (abs_a < 2 || abs_b < 2)
        return result;
    if (sa == sb) {
        if (abs_a > MAX / abs_b)
            *overflow = 1;
    } else {
        if (abs_a > MIN / -abs_b)
            *overflow = 1;
    }
    return result;
}