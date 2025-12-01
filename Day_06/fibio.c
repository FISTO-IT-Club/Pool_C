#include<stdio.h>
long long fib_tail(int n, long long a,long long b) {
                   if(n==0){
                    return 0;
                   }
                   else if(n==1){
                    return 1;
                   }
                   else{
                    return fib_tail(n-1,b,a+b);
                   }




}
int main(){
    int n=5;

    printf("%d",fib_tail(n,0,1));

}
