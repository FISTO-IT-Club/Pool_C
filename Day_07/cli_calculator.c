#include <stdio.h>
#include <string.h>   
#include <math.h>

void add_history(char history[5][50], char *entry, int *count) {
    if (*count < 5) {
        sprintf(history[*count], "%s", entry);
        (*count)++;
    } else {
        int i ;
        for (i = 1; i < 5; i++) {
            sprintf(history[i-1], "%s", history[i]);
        }
        sprintf(history[4], "%s", entry);
    }
}

int fact(int n) {
    int f = 1;
    int i;
    for (i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int main() {

    char op[10];
    double a, b;
    char history[5][50];
    int hcount = 0;

    while (1) {

        printf("\n---- CLI Calculator ----\n");
        printf("basic: +  -  *  /\n");
        printf("advanced: fact   sqrt   pwr2   pwr3\n");
        printf("other: history   exit\n");
        printf("Enter operation: ");
        scanf("%s", op);

        if (strcmp(op, "exit") == 0) {
            printf("bye :) \n");
            break;
        }

        else if (strcmp(op, "history") == 0) {
            printf("\nLast 5 calculations:\n");
            int i;
            for (i = 0; i < hcount; i++) {
                printf("%d) %s\n", i+1, history[i]);
            }
            continue;
        }

        /*operation basic*/
        else if (strcmp(op, "+") == 0 || strcmp(op, "-") == 0 ||
                 strcmp(op, "*") == 0 || strcmp(op, "/") == 0)
        {
            printf("Entez 1er  number: ");
            scanf("%lf", &a);
            printf("Entez 2éme number: ");
            scanf("%lf", &b);

            double R = 0;

            if (strcmp(op, "+") == 0) R = a + b;
            if (strcmp(op, "-") == 0) R = a - b;
            if (strcmp(op, "*") == 0) R = a * b;
            if (strcmp(op, "/") == 0) {
                if (b == 0) {
                    printf("Error!!\n");
                    continue;
                }
                R = a / b;
            }

            printf("Result: %.2f\n", R);

            char entry[50];
            sprintf(entry, "%.2f %s %.2f = %.2f", a, op, b,R);
            add_history(history, entry, &hcount);
        }

        /* factorial */
        else if (strcmp(op, "facto") == 0) {
            printf("Enter integer: ");
            scanf("%lf", &a);

            int R = fact((int)a);

            printf("Result: %d\n", R);

            char entry[50];
            sprintf(entry, "facto(%d) = %d", (int)a, R);
            add_history(history, entry, &hcount);
        }

        /*sqrt(x)*/
        else if (strcmp(op, "sqrt") == 0) {
            printf("Entez un number: ");
            scanf("%lf", &a);

            double R = sqrt(a);
            printf("Result: %.2f\n", R);

            char entry[50];
            sprintf(entry, "sqrt(%.2f) = %.2f", a, R);
            add_history(history, entry, &hcount);
        }

        /*power 2*/
        else if (strcmp(op, "pwr2") == 0) {
            printf("Entez un number: ");
            scanf("%lf", &a);

            double  R = a * a;
            printf("Result: %.2f\n", R);

            char entry[50];
            sprintf(entry, "pwr2(%.2f) = %.2f", a, R);
            add_history(history, entry, &hcount);
        }

        /* power 3 */
        else if (strcmp(op, "pwr3") == 0) {
            printf("Entez un number: ");
            scanf("%lf", &a);

            double R = a * a * a;
            printf("Result: %.2f\n", R);

            char entry[50];
            sprintf(entry, "pwr3(%.2f) = %.2f", a, R);
            add_history(history, entry, &hcount);
        }

        else {
            printf("Operation not found !\n");
        }
    }

    return 0;
}
