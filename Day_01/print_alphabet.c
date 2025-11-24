#include <unistd.h>

void print_alphabet(void) {
    for (char character = 'a'; character <= 'z'; character++) {
        write(1, &character, 1);
    }
}

int main(void) {
    print_alphabet();
    return 0;
}
