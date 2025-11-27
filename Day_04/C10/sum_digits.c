#include <stdio.h>


int sum_digits(int n) {
     int som = 0;
    for (int i = 0; i <= n; i++)
    {
       som += i ;
    }
    
  return som;
}



int main () {
 int nbr ;
    printf("entres un nombre ");
    scanf("%d",&nbr);
    
    printf("\n\n");
    printf("****************le somme des nombre sont *************");
    printf("\n\n");
      
    printf("le somme des nombre sont :%d ",sum_digits(nbr));
    return 0;
}