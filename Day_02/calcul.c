#include<stdio.h>
float a,b;
char op;
void calc(void){
    switch(op){
        case'+':printf("a+b=%f",a+b);
        case'-'::printf("a-b=%f",a-b);
        case'*':printf("a*b=%f",a*b);
        case'/':{if(b!=0)
             printf("a/b=%f",a/b);
             else printf("la division par 0 est impossible"); }
       default:printf("l'operation est incorrecte");
    
    }
}