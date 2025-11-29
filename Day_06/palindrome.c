#include <stdio.h>
#include <stdbool.h>

bool helper(char *s, int start, int end) {
    if (start >= end) {
        return true;
    }
    
    if (s[start] != s[end]) {
        return false;
    }
    
    return helper(s, start + 1, end - 1);
}

bool is_pal_tail(char *s) {
    int i = 0;
    
    while (s[i] != '\0') {
        i++;
    }
    
    return helper(s, 0, i - 1);
}

int main() {
    char s[20] = "level"; 
    
    if (is_pal_tail(s)) {
        printf("%s is a palindrome ", s);
    } else {
        printf("%s is not a palindrome ", s);
    }
    
}