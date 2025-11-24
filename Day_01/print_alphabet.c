include<stdio.h>
void print_alphabet(void){
    char c='a';
    while (c<='z'){
        write(1,&c,1);
        c++;
    }
}
int main(){
    print_alphabet();
    return 0;
}