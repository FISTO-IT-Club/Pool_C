#include<stdio.h>
#include <stdbool.h>

bool f_ispowerof3(int x) {
     if (x == 1) return true;
     if (x <= 0 || x % 3 != 0) {
        return false;
     }
     while(x>3) {
        if (x % 3 != 0) return false;
        x = x/3;
     }  

     return true;
}

int main() {
    int n;
    printf("Entrez un number : ");
    scanf("%d",&n);
    bool b = f_ispowerof3(n);
     if (!b) {
       printf("%d is not exact power of 3\n",n);
     } else {
       printf("%d is exact power of 3\n",n);
     }
       
    return 0;
}