#include <stdbool.h>
#include <string.h>

bool is_pal_tail(char * s) {
    if (s == NULL) return false;
    
    int len = strlen(s);
    if (len == 0) return true;
    
    return checker(s, 0, len - 1);
}

bool checker(char *s, int left_index, int right_index) {
    if (left_index >= right_index) return true;

    if (s[left_index] != s[right_index]) return false;
    
    return checker(s, left_index+1, right_index-1);
}