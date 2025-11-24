#include <stdio.h>
#include <unistd.h>

void print_alphabet() {
    for(char character = 'a'; character <= 'z'; character++) {
        write(STDOUT_FILENO, &character, 1);
        write(STDOUT_FILENO, "\n", 1);
    }
}

int main (int argc, char *argv[]) {
    print_alphabet();
    return 0;
}