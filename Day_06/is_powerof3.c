#include <stdio.h>
#include <stdbool.h>

bool is_powerof3(int n){
    if(n<1) return 0;
    while(n%3==0){
        n/=3;
    }
    return n==1;
}

int main (){
    int n ;
    printf("enter a number: ");
    scanf("%d",&n);
    if(is_powerof3(n)){
        printf("true");
    }else{
        printf("false");
    }
    return 0;
}