#include <stdbool.h>
bool is_pal_tail(char *s) {
    static int start = 0;
    static int end = -1;
    if (end == -1) {
        end = strlen(s) - 1;
    }
    if (start >= end) {
        start = 0;
        end = -1;
        return true;
    }
    if (s[start] != s[end]) {
        start = 0;
        end = -1;
        return false;
    }
    start++;
    end--;
    return is_pal_tail(s);
}
int main() {
    char str[100];
    printf("Enter un mot: ");
    scanf("%s", str);
    if (is_pal_tail(str)) {
        printf("\"%s\" est a palindrome", str);
    } else {
        printf("\"%s\" n'est pas palindrome", str);
    }
    return 0;
}