#include<stdio.h>
#include <io.h>
#include <stdlib.h>
void print_alphabet(void){
    char alphabet ='a';
    while( alphabet<='z'){

        write(1,&alphabet,1);
        alphabet++;
    }
}
int main(void){
    print_alphabet();
    printf("\n");
    system("PAUSE");
    return 0 ;
}
