#include <stdio.h>
#include <io.h>

void PrintChar(char a)
{
    _write(1, &a, 1);
}
int main ()
{
    char char1 = 'A';
    PrintChar(&char1);
}
