#include<stdio.h>
#include<unistd.h>
void printf_char(char a){
write(1,&a,1);
}
int main(){
    char a='A';
    printf_char(a);
}