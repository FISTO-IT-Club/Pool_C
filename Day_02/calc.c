#include <stdio.h>
#include <stdlib.h>
  void calc(void){
  
      float num1, num2;
      char operation;
      float res;
      
      
      printf("Enter num1: \n");
      scanf("%f",&num1);
  
      printf("Choose operation ( +, -, *, / ):\n ");
      scanf("%c",&operation);
       
      printf("Enter num2: \n");
      scanf("%f", &num2);

      switch (operation) {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':

            if (num2 == 0) {
                printf(" Division invalid!!!!!\n");
                exit(1);
            }

             res = num1 / num2;
               break;
        default:

                printf("Erreur!!!!\n");
                exit(1);
    }
        printf("Result is : %.2f\n", res);
  }
   int main(){
    calc();
    return 0;
   }