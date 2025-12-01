#include <stdio.h>
#include <string.h>

double fact(double n)
{
    return (n <= 1) ? 1 : n * fact(n - 1);
}

double my_sqrt(double x)
{
    double r = x;
    for (int i = 0; i < 15; i++)
        r = 0.5 * (r + x / r);
    return r;
}

int main()
{
    char op[10];
    double a, b, r;
    double hist[5] = {0};
    int idx = 0;

    while (1)
    {
        printf("\nOp (+ - * / fact sqrt pwr2 pwr3 exit): ");
        scanf("%s", op);

        if (!strcmp(op, "exit"))
            break;

        if (!strcmp(op, "+") || !strcmp(op, "-") || !strcmp(op, "*") || !strcmp(op, "/"))
        {
            scanf("%lf %lf", &a, &b);
            if (!strcmp(op, "+")) r = a + b;
            else if (!strcmp(op, "-")) r = a - b;
            else if (!strcmp(op, "*")) r = a * b;
            else r = (b == 0) ? 0 : a / b;
        }
        else if (!strcmp(op, "fact"))
        {
            scanf("%lf", &a);
            r = fact(a);
        }
        else if (!strcmp(op, "sqrt"))
        {
            scanf("%lf", &a);
            r = my_sqrt(a);
        }
        else if (!strcmp(op, "pwr2"))
        {
            scanf("%lf", &a);
            r = a * a;
        }
        else if (!strcmp(op, "pwr3"))
        {
            scanf("%lf", &a);
            r = a * a * a;
        }
        else
        {
            printf("Bad op\n");
            continue;
        }

        printf("= %.2lf\n", r);

        hist[idx % 5] = r;
        idx++;

        printf("Hist: ");
        for (int i = 0; i < 5; i++)
            printf("%.2lf ", hist[i]);
        printf("\n");
    }
}
