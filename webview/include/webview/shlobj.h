#include <shlwapi.h>

#define CSIDL_APPDATA   26

STDAPI SHGetFolderPathW(HWND hwnd, int csidl, HANDLE hToken, DWORD dwFlags, LPWSTR pszPath);
