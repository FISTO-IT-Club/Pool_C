#include <stdio.h>
#include <stdbool.h>

bool is_pal_tail(char * s)
{
    if (*s == '\0')
        return true;
    if (*s != *(s + 1))
        return false;
    return is_pal_tail(s + 2);
}

int main()
{
    // char s[] = "abcba";
    char s[] = "xxyyzz";
    printf("%s\n", is_pal_tail(s) ? "true" : "false");
    return 0;
}