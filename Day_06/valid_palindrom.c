#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool check(char *s, int start, int end) {
    if (start >= end) {
        return true;
    }

    if (s[start] != s[end]) {
        return false;
    }

    return check(s, start + 1, end - 1);
}

bool is_pal_tail(char *s) {
    int length = strlen(s);
    return check(s, 0, length - 1);
}

int main() {
    char str[100];
    printf("Entrez une chaîne : ");
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = '\0'; 
    if (is_pal_tail(str)) {
        printf("\"%s\" est un palindrome.\n", str);
    } else {
        printf("\"%s\" n'est pas un palindrome.\n", str);
    }

    return 0;
}
