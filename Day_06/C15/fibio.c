#include <stdio.h>

 long long fib_tail(int n, long long a, long long b )  {

    if ( n == 0)
    {
        return a ;
    }else if( n == 1)
        return 1 ;
    else return fib_tail(b,a+b,n-1); 
    }




int main() {

   int n , a , b ;
  

    printf("enter n :");
    scanf("%d",&n);
     printf("enter a :");
    scanf("%d",&a);
     printf("enter b :");
    scanf("%d",&b);
    printf("Fib_tail(%d) = %lld\n",n,fib_tail(n , a , b));
    return 0;





    return 0;
}