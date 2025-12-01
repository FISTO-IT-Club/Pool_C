#include <stdbool.h>
#include <string.h>

bool is_pal_tail(char *s, int left, int right) {
    if (left >= right)
        return true;
    if (s[left] != s[right])
        return false;
    return is_pal_tail(s, left + 1, right - 1);
}

int main() {
    char str[] = "racecar";
    printf("%d\n", is_pal_tail(str, 0, strlen(str) - 1));
    return 0;
}