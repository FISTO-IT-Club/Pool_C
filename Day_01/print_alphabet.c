#include <stdio.h>

void print_alphabet(void) {
    char alphabet;
    int i;
    for (i=0; i<26; i++) {
        alphabet = 'a' + i;
        printf("%c\n", alphabet);
    }
}

int main(){
    print_alphabet();
}