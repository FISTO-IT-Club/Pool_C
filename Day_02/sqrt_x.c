#include <stdio.h>

int sqrt_x(int nb) {
  if (nb < 0)
    return 0;
  int i = 0;
  while ((i + 1) * (i + 1) <= nb)
    i++;
  return i;
}

int main() {
  int n;
  if (scanf("%d", &n) != 1)
    return 0;
  printf("%d\n", sqrt_x(n));
  return 0;
}
