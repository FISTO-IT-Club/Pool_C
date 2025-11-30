#include <stdio.h>
#include <stdbool.h>

bool is_pal_helper(char *s, int left, int right) {
    if (left >= right) {
        return true;
    }
    
    if (s[left] != s[right]) {
        return false;
    }
    
    return is_pal_helper(s, left + 1, right - 1);
}

bool is_pal_tail(char *s) {
    if (s == NULL) {
        return true;
    }
    
    // Calculate length manually
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    
    if (len == 0) {
        return true;
    }
    
    return is_pal_helper(s, 0, len - 1);
}

int main() {
    char input[100];
    
    printf("Enter a string: ");
    scanf("%99s", input);
    
    if (is_pal_tail(input)) {
        printf("\"%s\" is a palindrome\n", input);
    } else {
        printf("\"%s\" is not a palindrome\n", input);
    }
    
    return 0;
}