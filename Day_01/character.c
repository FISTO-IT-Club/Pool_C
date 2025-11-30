#include <stdio.h>
#include <unistd.h>
void print_char(char a){
    write ( 1 , &a , 1);
}
int main(){
    char a;
    print_char(a);
}