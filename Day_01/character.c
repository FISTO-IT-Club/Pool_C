#include<stdio.h>
void print_char(char a){
    write(1,&a,1);
}
int main(){
    char c='a';
    while (c<='z'){
        write(1,&c,1);
        c++;
    }
    c ='\n';
    write(1,&c,1);
    c ='A';
    while(c<='Z'){
        write(1,&c,1);
        c++;
    }
    c ='\n';
    write(1,&c,1);

    return 0;
}