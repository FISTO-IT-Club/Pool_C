#include <unistd.h>

void print_alphabet(void)
{
    write(1, "it's possible", 26);
}