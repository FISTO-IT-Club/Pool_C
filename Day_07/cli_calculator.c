#include <stdio.h>
#include <string.h>
#include "calculatrice.h"

#define HISTORY_SIZE 5

char history[HISTORY_SIZE][50];
int history_count = 0;


void add_history(const char* operation) {
    if (history_count < HISTORY_SIZE) {
        strncpy(history[history_count], operation, 49);
        history[history_count][49] = '\0';
        history_count++;
    } else {
        // Shift and add new (keep only last 5)
        for (int i = 0; i < HISTORY_SIZE - 1; i++) {
            strcpy(history[i], history[i + 1]);
        }
        strncpy(history[HISTORY_SIZE - 1], operation, 49);
        history[HISTORY_SIZE - 1][49] = '\0';
    }
}


void show_history(void) {
    printf("\nLast %d operations:\n", HISTORY_SIZE);
    if (history_count == 0) {
        printf("No history\n");
        return;
    }
    for (int i = 0; i < history_count; i++) {
        printf("%d. %s\n", i + 1, history[i]);
    }
}

int cli_calculator(void) {
    int choice;
    
    printf("=== Simple CLI Calculator ===\n");
    
    while (1) {
        printf("\n1. Basic Calc\n2. Factorial\n3. Square Root\n");
        printf("4. Power of 2\n5. Power of 3\n");
        printf("6. Show History\n0. Exit\nChoice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 0:
                printf("Goodbye!\n");
                return 0;
                
            case 1:
                printf("\nBasic Calculator:\n");
                calc();
                break;
                
            case 2: {
                int n;
                printf("Number: ");
                scanf("%d", &n);
                if (n >= 0) {
                    int result = factorial(n);
                    printf("Factorial: %d\n", result);
                    char op[30];
                    snprintf(op, sizeof(op), "fact(%d)=%d", n, result);
                    add_history(op);
                }
                break;
            }
                
            case 3: {
                int x;
                printf("Number: ");
                scanf("%d", &x);
                if (x >= 0) {
                    int result = sqrt_x(x);
                    printf("Sqrt: %d\n", result);
                    char op[30];
                    snprintf(op, sizeof(op), "sqrt(%d)=%d", x, result);
                    add_history(op);
                }
                break;
            }
                
            case 4: {
                int y;
                printf("Number: ");
                scanf("%d", &y);
                f_ispowerof2(y);
                char op[30];
                snprintf(op, sizeof(op), "pwr2(%d)", y);
                add_history(op);
                break;
            }
                
            case 5: {
                int z;
                printf("Number: ");
                scanf("%d", &z);
                if (is_powerof3(z))
                    printf("Power of 3: Yes\n");
                else
                    printf("Power of 3: No\n");
                char op[30];
                snprintf(op, sizeof(op), "pwr3(%d)", z);
                add_history(op);
                break;
            }
                
                
            case 6:
                show_history();
                break;
                
            default:
                printf("Invalid choice\n");
                break;
        }
        
        while (getchar() != '\n');
    }
    
    return 0;
}

int main(void) {
    return cli_calculator();
}