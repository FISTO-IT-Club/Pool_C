#include<stdio.h>
#include<unistd.h>
void printf_alphabet(void){
    char ch;
    for(ch='a'; ch<='z'; ch++){
        write(1, &ch, 1);
    }
}
int main() {
        printf_alphabet();
        return 0;
}


