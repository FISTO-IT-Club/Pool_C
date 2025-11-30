#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_pal_tail(char *s) {
    int len = strlen(s);

    
    for (int left = 0, right = len - 1; left <= right; left++, right--) {
       
        if (s[left] = s[right])
            return false; 
    }

  
}

int main() {
    char str[100];
    printf("Entez string: ");
    scanf("%s", str);

    if (is_pal_tail(str))
        printf("%s is a palindrome\n", str);
    else
        printf("%s is not a palindrome\n", str);

    return 0;
}
