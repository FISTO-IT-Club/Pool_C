#include <stdio.h>
#include <stdbool.h>

bool is_pal_tail_helper(char *s, int left, int right) {
    if (left >= right)
        return true;             

    if ( s[left] != s[right] )
        return false;          

    return is_pal_tail_helper(s, left + 1, right - 1);  
}

bool is_pal_tail(char *s) {
    int len = strlen(s);
    return is_pal_tail_helper(s, 0, len - 1);
}



int main() {
    char str1[] = "racecar";
    char str2[] = "hello";

    if (is_pal_tail(str1)) {
        printf("\"%s\" is a palindrome.\n", str1);
    } else {
        printf("\"%s\" is not a palindrome.\n", str1);
    }

    if (is_pal_tail(str2)) {
        printf("\"%s\" is a palindrome.\n", str2);
    } else {
        printf("\"%s\" is not a palindrome.\n", str2);
    }

    return 0;
}