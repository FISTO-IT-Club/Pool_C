// lot of errors, and you didn't look ahead for some if statment checkers, but it alright we appreciate the work .
#include <stdio.h>
#include <math.h>
#include <string.h>


#define MAX_HISTORY 100
#define MAX_LEN 50


int addition(int a,int b){
    printf("%d + %d = %d\n",a,b,a+b);
}

int soustraction(int a,int b){
    printf("%d - %d = %d\n",a,b,a-b);
}

int multiplication(int a, int b){
    printf("%d * %d = %d\n",a,b,a*b);
}

int division(int a, int b){
    printf("%d / %d = %d\n",a,b,a/b);
}

int powerof2(int a){
    printf("%d power of 2 = %d\n",a,(int)pow(a,2));
}


int powerof3(int a){
    printf("%d power of 3 = %d\n",a,(int)pow(a,3));
}


double a_sqrt(int a){
    printf("sqrt of %d = %.4lf\n",a,sqrt(a));
}

int fact(int a){
    int result = 1;
    for (int i = a; i>=1 ; i--){
        result *= i;
    }
    printf("fact of %d = %d\n",a,result);
}

int main(){
    int a,b,option;
    char op[10];
    int temp;
    char history[MAX_HISTORY][MAX_LEN];
    int historycount = 0;
    printf("*********************************\n");
    printf("   Welcome to the Calculator App  \n");
    while (1){
        printf("*********************************\n");
        printf("Choose an option:\n");
        printf("1 - Do a calculation\n");
        printf("2 - View history\n");
        printf("3 - Quit\n");
        printf("*********************************\n");
        printf("Your choice: ");
        scanf("%d",&option);
        
        if(option == 1){
            printf("choose the first number: ");
            scanf("%d",&a);
            printf("choose the operation :(+, -, *,/,fact, sqrt, pwr(2), pwr(3)):  ");
            scanf("%s",&op);
            if (strcmp(op, "+") == 0){
                printf("choose the 2nd number :");
                scanf("%d",&b);
                addition(a,b);
                sprintf(history[historycount], "%d + %d = %d", a, b, a+b);
                historycount++;
                printf("press 0 to continue : ");
                scanf("%d",&temp);
            }
                


            if (strcmp(op, "-") == 0){
                printf("choose the 2nd number :");
                scanf("%d",&b);
                soustraction(a,b);
                sprintf(history[historycount], "%d - %d = %d", a, b, a-b);
                historycount++;
                printf("press 0 to continue : ");
                scanf("%d",&temp);
            }

            if (strcmp(op, "*") == 0){
                printf("choose the 2nd number :");
                scanf("%d",&b);
                multiplication(a,b);
                sprintf(history[historycount], "%d * %d = %d", a, b, a*b);
                historycount++;
                printf("press 0 to continue : ");
                scanf("%d",&temp);
            }

            if (strcmp(op, "/") == 0){
                printf("choose the 2nd number :");
                scanf("%d",&b);
                division(a,b);
                sprintf(history[historycount], "%d / %d = %d", a, b, a/b);
                historycount++;
                printf("press 0 to continue : ");
                scanf("%d",&temp);
            }

            if (strcmp(op, "fact") == 0){
                fact(a);
                int result = 1;
                for (int i = a; i>=1 ; i--) result *= i;
                sprintf(history[historycount], "fact(%d) = %d", a, result);
                historycount++;
                printf("press 0 to continue : ");
                scanf("%d",&temp);
            }

            if (strcmp(op, "sqrt") == 0){
                a_sqrt(a);
                sprintf(history[historycount], "sqrt(%d) = %d", a, (int)sqrt(a));
                historycount++;
                printf("press 0 to continue : ");
                scanf("%d",&temp);
            }

            if (strcmp(op, "pwr(2)") == 0){
                powerof2(a);
                sprintf(history[historycount], "%d^2 = %d", a, (int)pow(a,2));
                historycount++;
                printf("press 0 to continue : ");
                scanf("%d",&temp);
            }
            
            if (strcmp(op, "pwr(3)") == 0){
                powerof3(a);
                sprintf(history[historycount], "%d^3 = %d", a, (int)pow(a,3));
                historycount++;
                printf("press 0 to continue : ");
                scanf("%d",&temp);
            }
    }
        if (option == 2){
            printf("\n**** CALCULATION HISTORY ****\n");
            if (historycount == 0) {
                printf("No calculations yet!\n");
            } else {
                for (int i = 0; i < historycount; i++) {
                    printf("%d. %s\n", i+1, history[i]);
                }
            }
            printf("*****************************\n");
            printf("press 0 to continue : ");
            scanf("%d",&temp);
        }
        if (option == 3){
            break;  
}
}
}
