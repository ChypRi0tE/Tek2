#ifndef		EX01_H_
#define		EX01_H_

#include	<cstring>

template<typename T>
int	compare(const T& a, const T& b) {
  if (a < b)
    return -1;
  else if (a > b)
    return 1;
  return 0;
}

template<>
int	compare<const char *>(const char* const& a, const char* const& b) {
  int res= strcmp(a, b);
  if (res < 0)
    return - 1;
  else if (res > 0)
    return 1;
  return 0;
}

#endif
