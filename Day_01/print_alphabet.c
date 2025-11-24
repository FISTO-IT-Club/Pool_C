#include<stdio.h>
#include <unistd.h> 

void print_alphabet(void) {
    for (int i = 'a'; i <= 'z'; i++){
        write(1,&i,1);
    }
}

int main() {
    print_alphabet();
    return 0;
}