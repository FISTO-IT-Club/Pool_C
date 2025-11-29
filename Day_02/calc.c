#include <stdio.h>

void do_operation(char c, float a, float b) {
    if (c == '+') {
        printf("%f", a + b);
        return;
    }else if (c == '-') {
        printf("%f", a - b);
        return;
    }else if (c == '*') {
        printf ("%f", a * b);
        return;
    }else if ('/') {
        if (b == 0) {
            printf("You can't devide over 0");
            return;
        }
        printf ("%f", a / b);
        return;
    }
}

void calc(void) {
    char operation;
    float first;
    float second;
    printf("What Operation You want to execute: ");
    scanf("%s", &operation);
    printf("Enter the first number a float :");
    scanf("%f", &first);
    printf("Enter the second number a float :");
    scanf("%f", &second);
    // printf("%f, %f, %c", first, second, operation);
    do_operation(operation, first, second);
}


int main() {
    calc();
    return 0;
}