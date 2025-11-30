#include <stdio.h>
void f_tableau_multi(int n) {
int i ;
int produit ;
for (i=1; i<=10; i++) {
 produit=n*i;
printf("%d x %d = %d\n",n,i,produit);
}
}
int main (){
int n ;
printf("donner le nombre que vous vouler sont tableau d multiplication ");
scanf("%d",&n);
f_tableau_multi(n);
return 0;
}
