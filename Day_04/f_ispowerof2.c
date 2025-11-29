#include<stdio.h>
// we EXCLUDED the use of math.h
// by Ali
#include <math.h>
int f_ispowerof2(int x){
    int i;
    for(i=0;i<=x/2;i++){
        if(pow(i,2)==x){
            return i;
        }
    }
 return 0;

}
int main(){
    int result=f_ispowerof2(36);
    if(result==0){
        printf("No");
    }else{
        printf("res :%d",result);
    }
    return 0;
}
