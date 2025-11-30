// no history implementation , but overall we accept the work
#include <stdio.h>
#include <stdbool.h>
    double factoriel(double a){
        if (a < 0 ) {
            printf(" ERROR: Negative number  \n");
            return 0; }
        if (a == 0||a==1){
            return 1 ;
        }
            return a * factoriel(a - 1);
        }
    double sqrt_x(double a) {
        if (a < 0) return -1;
        if (a == 0) return 0;
        double  x=a/2.0 ;
        double sqr=0 ;
        for (int i = 0; i < 10; i++) {
            sqr = (x + a / x) / 2.0;
            x = sqr;}
              return sqr ;
    }

    int main() {
        int operateur ;
        double a, b, result;
        bool running = true;
        while (running) {
         printf("welcome to C calculator\n");
            printf(" 1_addition.\n");
            printf(" 2_subtraction.\n");
            printf(" 3_multiplication.\n");
            printf(" 4_division.\n");
            printf(" 5_factorial.\n");
            printf(" 6_square root.\n");
            printf(" 7_power of 2.\n");
            printf(" 8_power of 3.\n");
            printf(" 0_QUIT.\n");
            printf("enter your choice :");
            scanf("%d",&operateur);
            if (operateur == 0) {
            running = false;
             break ;}
         switch (operateur) {
          case 1:
                 printf("enter the first number:");
                 scanf("%lf",&a);
                 printf("enter the second number:");
                 scanf("%lf",&b);
              result = a + b;
                 printf("%.2lf + %.2lf = %.2lf\n",a,b,result);
                break;
             case 2:
                 printf("enter the first number:");
                 scanf("%lf",&a);
                 printf("enter the second number:");
                 scanf("%lf",&b);
                 result = a - b;
                 printf("%.2lf - %.2lf = %.2lf\n",a,b,result);
                 break;

             case 3:
                 printf("enter the first number:");
                 scanf("%lf",&a);
                 printf("enter the second number:");
                 scanf("%lf",&b);
                 result = a * b;
                 printf("%.2lf * %.2lf = %.2lf\n",a,b,result);
                 break;
             case 4:
                 printf("enter the first number:");
                 scanf("%lf",&a);
                 printf("enter the second number:");
                 scanf("%lf",&b);
                   if (b == 0) {
                      printf("ERROR");
                        break ;              }
                 result = a / b;
                 printf("%.2lf / %.2lf = %.2lf\n",a,b,result);
                 break;
             case 5:
                 printf("enter the number you want to calculate its factorial:\n");
                 scanf("%lf",&a);
                 result = factoriel(a);
                 printf("factorial of %.2lf= %.2lf\n",a,result);
                 break;
             case 6:
                 printf("enter the number you want to calculate its square root:\n");
                 scanf("%lf",&a);
                 result = sqrt_x(a);
                 printf(" square root of %lf = %lf\n",a,result);
                 break;
             case 7:
                 printf("enter the number you want to calculate the number in power of 2\n");
                 scanf("%lf",&a);
                 result = a * a;
                 printf("%.2lf ^2= %.2lf\n",a,result);
                 break;
             case 8:
                 printf("enter the number you want to calculate the number in power of 3\n");
                 scanf("%lf",&a);
                 result = (a * a) * a;
                 printf("%.2lf ^3 = %.2lf\n",a,result);
                 break;
               default:
                 printf("ERROR : invalid number");
          }


          }
                return 0;
       }
