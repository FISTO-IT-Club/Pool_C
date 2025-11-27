#include <stdio.h>

void f_tableau_multi(int n) {

int i ;

  for ( i = 0; i <=10; i++)
  {
    printf("%d x %d = %d\n",n,i,n*i);
  }
     
   
}


int main () {

    int num ;

    printf("entres un nombre ");
    scanf("%d",&num);
    printf("\n\n");
    printf("****************le tablraux de multiplication de %d *************",num);printf("\n\n");
    f_tableau_multi(num);

return 0;
}