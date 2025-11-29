#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("CLI Calculator\n");
    char operator;
    double num1, num2, result;
    char op[10];
    int HISTORY_SIZE = 5;
    char history[5][100];
    int history_count = 0;

    printf("Enter operation num1 (+, -, *, /) num2 or 'history' to view past calculations or 'exit' to quit:\n");
    while (1)
    {

        printf("> ");
        scanf("%lf %s %lf", &num1, op, &num2);
        if (strcmp(op, "exit") == 0)
        {
            break;
        }
        else if (strcmp(op, "history") == 0)
        {
            printf("Calculation History:\n");
            for (int i = 0; i < history_count; i++)
            {
                printf("%s\n", history[i]);
            }
            // continue;
            break;
        }
        else
        {
            operator = op[0];

            switch (operator)
            {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0)
                {
                    result = num1 / num2;
                }
                else
                {
                    printf("Error: Division by zero\n");
                    continue;
                }
                break;
            default:
                printf("Invalid operator\n");
                continue;
            }
            printf("Result: %.2lf\n", result);
            if (history_count < HISTORY_SIZE)
            {
                snprintf(history[history_count], sizeof(history[history_count]), "%.2lf %c %.2lf = %.2lf", num1, operator, num2, result);
                history_count++;
            }
        }
    }
    return 0;
}