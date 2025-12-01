#include<stdio.h>
#include <math.h>
int f_ispowerof2(int x) {
    int i;
    if(x==1){
        return 1; //cuz 1=2^0
    }
    i=0;


     while(x>=pow(2, i)){
            i++;

            if(x==pow(2, i)){ // if x is exact power of 2 return 1 else return 0
            return 1;
            }
     }

     return 0;



}

int main(){
    int x=9;
     printf("%d",f_ispowerof2(x));
}
