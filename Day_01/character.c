#include<stdio.h>
#include <unistd.h> 

void print_char(char a) {
    write(1,&a, 1);
}

int main() {
    print_char('y');
    return 0;
}