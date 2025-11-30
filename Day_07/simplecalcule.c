#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_HISTORY 5
#define MAX_INPUT 128

double history[MAX_HISTORY];
char history_expr[MAX_HISTORY][64];
int history_count = 0;

void add_history(double result, const char *expr)
{
    int i;
    for(i = MAX_HISTORY-1; i>0; i--)
    {
        history[i] = history[i-1];
        strcpy(history_expr[i], history_expr[i-1]);
    }
    history[0] = result;
    strcpy(history_expr[0], expr);
    if(history_count < MAX_HISTORY) history_count++;
}

void print_history()
{
    int i;
    printf("\nLast %d calculations:\n", history_count);
    for(i=0;i<history_count;i++)
    {
        printf("%d: %s = %.2f\n", i+1, history_expr[i], history[i]);
    }
    printf("-----\n\n");
}

double factorial(int n)
{
    if(n<0) return 0;
    if(n==0) return 1;
    return n*factorial(n-1);
}

int main()
{
    char input[MAX_INPUT];
    char expr[64];
    double a,b,result;
    char op[8], func[16];

    printf("Simple Calculator!\n");
    printf("Basic: + - * /\n");
    printf("Advanced: fact(n), sqrt(n), pwr2(n), pwr3(n)\n");
    printf("'history' shows last 5, 'quit' to exit\n\n");

    while(1)
    {
        printf(">>> ");
        fgets(input, MAX_INPUT, stdin);
        input[strcspn(input,"\n")] = 0;

        if(strcmp(input,"quit")==0) break;
        if(strcmp(input,"history")==0)
        {
            print_history();
            continue;
        }

        if(sscanf(input,"%[a-z](%lf)",func,&a)==2)
        {
            if(strcmp(func,"fact")==0) result = factorial((int)a);
            else if(strcmp(func,"sqrt")==0) result = sqrt(a);
            else if(strcmp(func,"pwr2")==0) result = a*a;
            else if(strcmp(func,"pwr3")==0) result = a*a*a;
            else
            {
                printf("Unknown func: %s\n",func);
                continue;
            }
            snprintf(expr,64,"%s(%.2f)",func,a);
            printf("= %.2f\n\n",result);
            add_history(result,expr);
            continue;
        }

        if(sscanf(input,"%lf %s %lf",&a,op,&b)==3)
        {
            if(strcmp(op,"+")==0) result=a+b;
            else if(strcmp(op,"-")==0) result=a-b;
            else if(strcmp(op,"*")==0) result=a*b;
            else if(strcmp(op,"/")==0)
            {
                if(b==0){ printf("Error divide by 0!\n"); continue; }
                result=a/b;
            }
            else { printf("Unknown op: %s\n",op); continue; }

            snprintf(expr,64,"%.2f %s %.2f",a,op,b);
            printf("= %.2f\n\n",result);
            add_history(result,expr);
            continue;
        }

        printf("Invalid input!\n");
    }

    printf("baslama!\n");
    return 0;
}
