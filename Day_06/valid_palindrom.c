#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_pal_tail_helper(char *s, int left, int right) {
    if (left >= right) {
        return true;
    }
    if (s[left] != s[right]) {
        return false;
    }
    return is_pal_tail_helper(s, left + 1, right - 1);
}
bool is_pal_tail(char *s) {
    int len = strlen(s);
    return is_pal_tail_helper(s, 0, len - 1);
}
int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    if (is_pal_tail(s)) {
        printf("\"%s\" is a palindrome.\n", s);
    } else {
        printf("\"%s\" is not a palindrome.\n", s);
    }
    return 0;
}
