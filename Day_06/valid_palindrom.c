#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_pal_tail(char * s, int len) {
    if (len <= 1) {
        return true;
    }

    if (s[0] != s[len-1]) {
     return false;
    }

    return is_pal_tail(s+1, len-2);
}

int main(){

    char mot[100];
    printf("tapez votre mot : ");
    scanf("%c", mot);

    if (is_pal_tail(mot, strlen(mot))) {
        printf("the mot is a pal");
    }
    else {
        printf("the mot is not a pal");
    }
}