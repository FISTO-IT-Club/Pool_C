#include<stdio.h>
#include<unistd.h>
void print_alphabet(void) {
   for(int A='a';A<='z';A++){
    write(1,&A,1);
}
}
int main(){
    print_alphabet();
}