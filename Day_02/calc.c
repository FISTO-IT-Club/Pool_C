#include <stdio.h>

void calc(void) {
    char operation;
    float a,b,result;
    printf("fill in the first number : ");
    scanf("%f",&a);
    printf("choose the operation : ");
    scanf(" %c",&operation);
    printf("fill in the second number : ");
    scanf("%f",&b);
    switch (operation){
        case '+':
        result=a+b;
        break;
        case '-':
        result = a - b;
        break;
        case '*':
        result = a * b;
        break;
        case '/':
        result= a/b;
        default:
        printf("invalid operation \n");
    }
    printf("the result is : %.2f",result);
}
int main(){
    calc();
}