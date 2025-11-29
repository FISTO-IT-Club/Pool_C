#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int is_pal_tail(char *s) {
    int i = 0;
    int j = -1;
    bool a = true;
    if (a) {
        i = 0;
        j = 0;
        while (s[j] != '\0'){
        j++;
        }
        j--;
        a = false;
    }
    else if (i >= j) {
        a = true;
        return true;
    }
    else if (s[i] != s[j]) {
        a = true;
        return false;
    }
    i++;
    j--;
    return is_pal_tail(s);
}

int main (){
    char mot[15];
    printf("Entrez votre mot: ");
    scanf("%s", mot);
    bool s = is_pal_tail(mot);
    printf("'%s' %s",mot,s ? "est invercible": "n'est pas invercible");
    exit(0);
}
