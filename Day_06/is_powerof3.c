#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool is_powerof3(int n){
    int i;
    for(i=0;i<=n/2;i++){
        if(pow(i,3)==n){
            return true ;
        }
    }
    return false;
}
void main(){
    bool result=is_powerof3(8);
    if(result==true){
        printf("True");
    }else{
        printf("False");
    }
}


