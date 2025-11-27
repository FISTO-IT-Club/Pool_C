#include <stdio.h>
#include <unistd.h>

void print_alphabet(void) {
    char L = 'a';

    while (L <= 'z') {
        write(1, &L, 1);
        L++;
    }
    write(1, "\n", 1);
}

int main(void) {
    print_alphabet();
    return 0;
}
