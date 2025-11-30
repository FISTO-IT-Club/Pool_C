#include<stdio.h>
void calc(void) { 
 char oper ;
 float a, b, Res ;
    printf("entrez operation (+, -, *, /): ");
    scanf(" %c", &oper);  
    p#irintf("Entrer 1_ér Number: ");
    scanf("%f", &a);

    printf("Enter 2_éme Number: ");
    scanf("%f", &b);
    
    int done = 0;

    while (done == 0) {

        if (oper == '+') {
            Res= a + b;
            printf("Result = %.2f\n", Res);
            done = 1;
        }

        else if (oper == '-') {
            Res= a - b;
            printf("Result = %.2f\n", Res);
            done = 1;
        }

        else if (oper== '*') {
            Res = a * b;
            printf("Result = %.2f\n", Res);
            done = 1;
        }

        else if (oper == '/') {
            if (b == 0) {
                printf("Error!\n");
            } else {
                Res = a / b;
                printf("Result = %.2f\n", Res);
            }
            done = 1;
        }

        else {
            printf("Invalid operation! ");
            scanf(" %c", &oper);
        }
    }
}

int main() {
    calc();
    return 0;
}
