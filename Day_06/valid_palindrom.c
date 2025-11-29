#include <stdbool.h>
#include <string.h>


static bool pal_helper(char *s, int left, int right)
{
    if (left >= right)
        return true;
    if (s[left] != s[right])
        return false;
    return pal_helper(s, left + 1, right - 1);  // tail recursion
}

bool is_pal_tail(char *s)
{
    int len;

    if (!s)
        return false;

    len = (int)strlen(s);
    if (len <= 1)
        return true;

    return pal_helper(s, 0, len - 1);
}
