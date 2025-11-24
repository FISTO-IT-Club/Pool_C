#include <stdio.h>

void PrintChar(char a)
{
    printf("%c", a);
}

void PrintAlphabet()
{
    for(size_t i = 65; i<= 90; i++)
    {
       PrintChar((char)i);
    }
}

int main()
{
    PrintAlphabet();
    return 0;
}