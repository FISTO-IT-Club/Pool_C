#include <unistd.h>

void print_alphabet(void) {
    char i = 'a';

    while (i <= 'z') {
        write(1, &i, 1);
        i++;
    }
}
int main() {
    print_alphabet();
    return 0;
}

