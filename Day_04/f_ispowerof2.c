#include <unistd.h>
int f_ispowerof2(int x) {
  if (x <= 0)
    return 0;
  while (x > 1) {
    if (x % 2 != 0)
      return 0;
    x = x / 2;
  }
  return 1;
}
