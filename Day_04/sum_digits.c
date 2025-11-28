#include<stdio.h>

int sum_digits(int n) {
   int sum = 0;
   for (int i=0;i<=n;i++) {
       sum +=i;
   }
   return sum;
}

int main() {
    int n;
    printf("Entrez un number : ");
    scanf("%d",&n);
    int res = sum_digits(n);
    printf("res : %d\n",res);
    return 0;
}