#include <unistd.h>
#include <stdio.h>

void print_alphabet(void) {
    for(char i='a';i<='z';i++){
        write(1,&i,1);
    }
}

int main(void){
    print_alphabet();
}