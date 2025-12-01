#include<stdio.h>

void calc(void) {

    float a,b,res;
    char op;
    printf("Entrer premiere nombre : ");
    scanf("%f",&a);
    printf("Entrer deuxieme nombre : ");
    scanf("%f",&b);
    printf("Operation + ou - ou * ou / : ");
    scanf(" %c",&op);
    switch (op)
    {
    case '+':
        res = a + b;
        printf("res : %.2f\n",res);
        break;
    case '-':
        res = a - b;
        printf("res : %.2f\n",res);
        break;
    case '*':
        res = a * b;
        printf("res : %.2f\n",res);
        break;
    case '/':
        if (b != 0) {
           res = a / b;
           printf("res : %.2f\n",res);
        } else {
           printf("Error : division par zero\n");
        }

        break;
    default:
        printf("Error: Invalid Operation\n");
        break;
    }
}

int main() {

    calc();
    return 0;
}