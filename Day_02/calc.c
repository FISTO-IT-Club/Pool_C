#include <stdio.h>

void calc(void){

    char operator;
    float num1 , num2;

    printf("Enter operator: ");
    scanf(" %c", &operator);
    printf("Enter number 1: ");
    scanf("%f", &num1);
    printf("Enter number 2: ");
    scanf("%f", &num2);
    
    
    
    
    switch (operator) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error! cannot divide by zero\n");
                return;
            }
            else{
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            }
            
            break;
        default:
            printf("Error! operator is not correct\n");
    }
}

int main(void){
    calc();
    return 0;
}