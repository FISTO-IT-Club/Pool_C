#include <stdio.h>
#include <io.h>

void PrintAlphabet()
{
    for(size_t i = 97; i<= 122; i++)
    {
        char a = (char)i;
        _write(1, &a, 1);
    }
}

int main()
{
    PrintAlphabet();
    return 0;
}