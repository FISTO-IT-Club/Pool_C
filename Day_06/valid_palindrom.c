#include <stdbool.h>

bool is_pal_tail_rec(char *s, int left, int right)
{
    if (left >= right)      
        return true;

    if (s[left] != s[right])   
        return false;

    
    return is_pal_tail_rec(s, left + 1, right - 1);
}

bool is_pal_tail(char *s)
{
    int len = 0;

    while (s[len] != '\0')   
        len++;

    if (len == 0)            
        return true;

    return is_pal_tail_rec(s, 0, len - 1);
}