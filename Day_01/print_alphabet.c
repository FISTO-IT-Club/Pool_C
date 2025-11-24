#include<stdio.h>
#include<unistd.h>
void printf_alphabet(){
    char ch;
    for(ch='a'; ch<='z'; ch++){
        write(1, &ch, 1);
    }
    int main() {
        pintf_alphabet();
        return 0;
    }
}