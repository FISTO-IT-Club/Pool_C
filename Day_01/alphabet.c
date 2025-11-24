#include <unistd.h>

void print_alphabet() {
    char letter = 'a';
    while (letter <= 'z') {
        write(1, &letter, 1);
        letter++;
    }
}
