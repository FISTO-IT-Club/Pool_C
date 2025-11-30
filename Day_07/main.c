#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    printf("CLI Calculator\n");

    double num1, num2, result;
    char line[100];
    char operator;
    const int HISTORY_SIZE = 5;
    char history[5][100];
    int history_count = 0;

    printf("Enter \"num1 operator num2\" (e.g., 4 + 6)\n");
    printf("Type 'history' to view past calculations, or 'exit' to quit.\n");

    while (1)
    {
        printf("> ");
        fgets(line, sizeof(line), stdin);

        // Remove newline
        line[strcspn(line, "\n")] = 0;

        // Exit
        if (strcmp(line, "exit") == 0)
        {
            break;
        }

        // History
        if (strcmp(line, "history") == 0)
        {
            printf("Calculation History:\n");
            for (int i = 0; i < history_count; i++)
            {
                printf("%s\n", history[i]);
            }
            continue;
        }

        if (sscanf(line, "%lf %c %lf", &num1, &operator, &num2) != 3)
        {
            printf("Invalid format. Use: num1 operator num2\n");
            continue;
        }

        // Calculate
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
            if (num2 == 0)
            {
                printf("Error: Division by zero\n");
                continue;
            }
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator\n");
            continue;
        }

        printf("Result: %.2lf\n", result);

        if (history_count < HISTORY_SIZE)
        {
            snprintf(history[history_count], sizeof(history[history_count]),
                     "%.2lf %c %.2lf = %.2lf",
                     num1, operator, num2, result);
            history_count++;
        }
    }

    return 0;
}
