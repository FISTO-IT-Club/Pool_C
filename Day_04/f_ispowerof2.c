#include<stdio.h>

int f_ispowerof2(int x) {
     if (x == 1) return 1;
     if (x % 2 != 0) {
        return 0;
     }
     while(x>2) {
        x = x/2;
        if (x % 2 != 0) return 0;
        if (x == 2) return 1;
     }  

     return 0;
}

int main() {
    int n;
    printf("Entrez un number : ");
    scanf("%d",&n);
    int res = f_ispowerof2(n);
     if (res == 0) {
       printf("%d is not exact power of 2\n",n);
     } else {
       printf("%d is exact power of 2\n",n);
     }
       
    return 0;
}