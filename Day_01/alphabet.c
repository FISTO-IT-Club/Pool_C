#include<stdio.h>
void print_alphabet(void){
    char i;
    for (i='a';i<='z';i++)
    write(1,&i,1);
}
int main( {
    print_alphabet();
    return 0;
})