#include <stdio.h>

void print_alphabet(void){
    char c='a';
    while(c<='z'){
        printf("%c",c);
        c++;
    }
}

int main(void){
    print_alphabet();
    return 0;
}