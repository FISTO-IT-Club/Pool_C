#include <stdio.h>
#include <unistd.h>
#include <string.h>
void print_char(char a) {
    char charactere = 'b';
    write(1, &charactere, 1);
}

int main() {
    char a ;
    print_char(a);
    return 0;
}   