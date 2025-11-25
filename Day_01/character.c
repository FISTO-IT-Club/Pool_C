#include <unistd.h>
#include <stdio.h>

void print_char(char a){
    write(1, &a, 1);
}


int main(void){
    print_char('b');
    return 0;

}