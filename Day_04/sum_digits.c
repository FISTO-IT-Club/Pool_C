#include <unistd.h>
int sum_digits(int n) {
  int total = 0;
  int i = 0;
  while (i <= n) {
    total = total + i;
    i++;
  }
  return total;
}
