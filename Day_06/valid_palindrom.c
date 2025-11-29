#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_pal_tail(char * s) {
    int start = 0;
    int end = strlen(s) - 1;

    while (end > start) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    if (is_pal_tail(word)) {
        printf("%s is a palindrome.\n", word);
    } else {
        printf("%s is not a palindrome.\n", word);
    }

    return 0;
}