#include  <stdio.h>
#include  <stdbool.h>

bool is_powerof3(int n) {
    if (n == 1)
        return true;
    else if (n <= 0 || n%3 != 0)
        return false;
    else
        return is_powerof3(n/3);
}

int main() {
    int a = -1, b = 81, c = 20;
    if (is_powerof3(a)) {
        printf("%d is power of 3", a);
    }
    else
        printf("%d is not power of 3", a);

    if (is_powerof3(b)) {
        printf("\n%d is power of 3", b);
    }
    else
        printf("\n%d is not power of 3", b);

    if (is_powerof3(c)) {
        printf("\n%d is power of 3", c);
    }
    else
        printf("\n%d is not power of 3", c);

}