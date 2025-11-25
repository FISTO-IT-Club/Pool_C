#include <stdio.h>

void calc(void) {
    char op;
    float num1, num2;


    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    switch (op){
        case '+':
            printf("Result: %0.2f\n", num1+num2);
            break;
        case '-':
            printf("Result: %0.2f\n", num1-num2);
            break;
        case '*':
            printf("Result: %0.2f\n", num1*num2);
            break;
        case '/':
            if (num2 == 0){
                printf("Error: Division by zero\n");
            } else{
                printf("Result: %0.2f\n", num1/num2);
            }
            break;
        default:
            printf("Error: Invalid operation\n");
            break;
    }
}

int main(void){
    calc();
    return 0;
}