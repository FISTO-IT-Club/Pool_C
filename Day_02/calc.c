#include<stdio.h>
void calc(void) {
    float a,b;
    char op;
     printf("entrer a et b");
    scanf("%f %f",&a,&b);
    printf("entrer l'operation");
    scanf("%c",&op);
    if(op=='+'){
        printf("%f +%f=%f",a,b,a+b);


    }
    else if(op=='-'){
        printf("%f +%f =%f",a,b,a-b);
    }
    else if(op=='*'){
        printf("%f *%f=%f",a,b,a+b);
    }
    else if(op=='/'){
    if(b!=0){
            printf("%f / %f=%f",a,b,a/b);
    }
    }

    else{
        printf("entrer les opetation +  - * /");}
}
int main(){

    calc();
}
