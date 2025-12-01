#include <unistd.h>
void f_tableau_multi(int n) {
  int i = 0;
  while (i <= 10) {
    int result = n * i;
    int tens = result / 10;
    int ones = result % 10;
    if (tens > 0)
      write(1, &tens, 1);
    write(1, &ones, 1);
    if (i < 10)
      write(1, " ", 1);
    i++;
  }
}
