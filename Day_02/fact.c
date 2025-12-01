#include <stdio.h>

int factorial(int nb) {
  if (nb <= 1)
    return 1;
  return nb * factorial(nb - 1);
}

int main() {
  int n;
  if (scanf("%d", &n) != 1)
    return 0;
  printf("%d\n", factorial(n));
  return 0;
}
