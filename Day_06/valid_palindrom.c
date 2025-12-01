#include <stdbool.h>
#include <string.h>

bool is_pal_tail(const char *s, int left, int right) {
    if (left >= right) return true;         
    if (s[left] != s[right]) return false;  
    return is_pal_tail(s, left + 1, right - 1);   
}
bool is_pal_tail_wrapper(char *s) {
    return is_pal_tail(s, 0, strlen(s) - 1);
}