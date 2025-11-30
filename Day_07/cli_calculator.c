#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

unsigned long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int choice;
    double num1, num2, result;
    int fact_n;

    printf("  CLI CALCULATOR \n");

    while (1) {
        printf("\n----------------------------------------\n");
        printf("Basic:    [1] =>(+)   [2]=> (-)   [3]=> (*)   [4]=> (/)\n");
        printf("Advanced: [5]=> n!    [6]=> sqrt  [7] =>x^2   [8] =>x^3\n");
        printf("[0] EXIT\n");
        printf("Choice  ");


        if (scanf("%d", &choice) != 1) {
            while(getchar() != '\n'); 
            continue;
        }

        if (choice == 0){ 
                break;
            } 

        if (choice >= 1 && choice <= 4) {
            printf("Enter num1: "); scanf("%lf", &num1);
            printf("Enter num2: "); scanf("%lf", &num2);
        } else if (choice >= 6 && choice <= 8) {
            printf("Enter number: "); scanf("%lf", &num1);
        } else if (choice == 5) {
            printf("Enter integer (0-20): "); scanf("%d", &fact_n);
        } else {
            printf("Invalid choice!\n");
            continue;
        }

        int error = 0;

        switch (choice) {
            case 1: 
                result = num1 + num2; 
                break;
            case 2: 
                result = num1 - num2; 
                break;
            case 3: 
                result = num1 * num2; 
                break;
            case 4: 
                if (num2 == 0) {
                    printf("Error: Division by Zero \n");
                    error = 1;
                } else {
                    result = num1 / num2;
                }
                break;
            case 5: 
                if (fact_n < 0 || fact_n > 20) {
                    printf("Error: Invalid input must be 0-20\n");
                    error = 1;
                } else {
                    printf(" Result: %d! = %llu\n", fact_n, factorial(fact_n));
                    error = 1; 
                }
                break;
            case 6: 
                if (num1 < 0) {
                    printf("Error: Negative Square Root \n");
                    error = 1;
                } else {
                    result = sqrt(num1);
                }
                break;
            case 7: 
                result = pow(num1, 2); 
                break;
            case 8: 
                result = pow(num1, 3); 
                break;
            default:
                error = 1;
        }

        if (!error) {
            printf(" Result: %.2f\n", result);
        }
    }

    printf("Goodbye");
    return 0;
}