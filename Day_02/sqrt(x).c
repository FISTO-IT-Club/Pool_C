

#include <stdio.h>


int sqrt_x(int nb) {
double  x=nb/2.0 ;
 double sqr=0 ;
  sqr=(x+nb/x)/2.0;
  printf("%d\n",sqr);
}
int main() {
 int nb ;
 printf("donner un nombre pour calculer son factoriel");
 scanf("%d",&nb);
 if (nb<=0) {
     printf("EREUR");
   }else {
    sqrt_x(nb);
 }

return 0;
}