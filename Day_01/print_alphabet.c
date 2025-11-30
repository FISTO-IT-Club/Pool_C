#include <stdio.h>
#include <unistd.h>
#include <string.h>
void print_alphabet(void) {
    char alphabet;
    for (alphabet = 'a'; alphabet <= 'z'; alphabet++) {
        write(1, &alphabet, 1);
    }
}

int main() {
    print_alphabet();
    return 0;
}
