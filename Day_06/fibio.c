#include<stdio.h>

long long fib_tail(int n, long long a, long long b ){
   if (n == 0){
   return a;
}
     return fib_tail(n - 1, b , a+b);
}
int main(){
int n;
long long resultat ;
   printf("donner un nombre");
   scanf("%d",&n);
   resultat = fib_tail(n,0,1);
   printf("%lld\n",resultat);
   return 0;
}
