#include <stdbool.h>

bool is_pal_tail(char *s)
{
    int len = 0;
    while (s[len])
        len++;

    if (len <= 1)
        return true;

    if (*s != s[len - 1])
        return false;

    s[len - 1] = '\0';        
    return is_pal_tail(s + 1); 
}

