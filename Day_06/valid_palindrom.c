#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_pal_tail_oneptr(const char *s, int i, int len)
{
    if (i >= len - 1 - i)
    {
        return true;
    }

    if (s[i] != s[len - 1 - i])
    {
        return false;
    }

    return is_pal_tail_oneptr(s, i + 1, len);
}

bool is_pal_tail(char *s)
{
    if (!s)
        return false;

    int len = (int)strlen(s);
    if (len <= 1)
        return true;

    return is_pal_tail_oneptr(s, 0, len);
}

int main(void)
{
    printf("%s\n", is_pal_tail("") ? "true" : "false");
    printf("%s\n", is_pal_tail("abba") ? "true" : "false");
    printf("%s\n", is_pal_tail("abc") ? "true" : "false");
    printf("%s\n", is_pal_tail("abcdcba") ? "true" : "false");
}