#include<stdio.h>
#include<math.h>
int sqrt_x(int nb){
    float racine;
    racine=pow(nb,0.5);
    return racine;
}
int main(){
    int a;
    float t;
    printf ("saisir un nbr:");
    scanf("%d",&a);
    t=sqrt_x(a);
    printf("%f",t);
    return
}