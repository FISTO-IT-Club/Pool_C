#include <unistd.h>

void print_char(char a) {
    write(1, &a, 1);
}

