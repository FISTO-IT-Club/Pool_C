#include <stdio.h>


int f_ispowerof2(int x) {


    if (x <= 0)
    {
        return 0;
    }
    
   while ( x % 2 == 0)
   {
    x /= 2;
   }
   return 1;
}

int main () {
    int nbr;
    printf("entres un nombre : ");
    scanf("%d",&nbr);
if (f_ispowerof2(nbr))
  printf("%d est une puissance de 2.\n", nbr);
else
  printf("%d N'EST PAS une puissance de 2.\n", nbr);
 
    return 0;


}