#include <stdbool.h>

bool is_powerof3(int n) {
    if (n <= 0) return false;
    if (n == 1) return true;
    if (n % 3 != 0) return false;
    return is_powerof3(n / 3);
}