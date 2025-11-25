#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void calc(){
    char op;
    printf("saisir une operation mathematique: \n");
    scanf("%c",&op);
    float x,y;
    printf("saisir deux nombre: \n");
    scanf("%f %f",&x,&y);
    if(op=='+'){
        float result = x + y;
        printf("Resultat= %f \n", result);
    }else if (op=='-')
    {
       float result = x - y;
        printf("Resultat= %f \n", result);
    }else if (op=='*')
    {
        float result = x * y;
        printf("Resultat= %f \n", result);
    }else if (op=='/')
    {
        if(y==0){
            exit(EXIT_FAILURE);
        }
        float result = x / y;
        printf("Resultat= %f \n", result);
    }else{
        printf("Saisie erronee\n");
        exit(EXIT_FAILURE);
    } 
}
int main(){
    calc();
    return 0;
}
