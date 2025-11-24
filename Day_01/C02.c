#include <unistd.h>
void print_alphabet(void)
{
    char x = 'a';
    while (x <= 'z') //   sur  linux

    {
        write(1, &x, 1);
        x++;
    }
}