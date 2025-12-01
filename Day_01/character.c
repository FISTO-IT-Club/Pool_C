#include<stdio.h>
void print_char(char a){
    write(1,&a,1);
}
int main(void){
    print_char('a');
    return 0;
}