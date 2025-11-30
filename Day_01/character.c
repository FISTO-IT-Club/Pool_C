#include <stdio.h>

void print_char(char a) {
    printf("%c", a);
}

int main(){
    char ch;
    printf("taper un caracter : ");
    scanf("%c", &ch);
    print_char(ch);
}