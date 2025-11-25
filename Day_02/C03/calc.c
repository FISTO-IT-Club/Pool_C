
    #include <stdio.h>

    int Calc(float num1, float num2, char op) {
    int result=0;
      switch(op) {
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
               if (num2!=0)
               result = num1 / num2;
              else
            printf("impossible!!!🥱 \n");
           break;
         default:
        printf("this operation is not supported\n");
      break;
        }
        return result;
    }

    int main(void) {
        float num1, num2;
        char operator;

        printf("enter the number 1 :\n");
        scanf("%f", &num1);
        printf("enter the number 2 :\n");
        scanf("%f", &num2);
        printf("enter the operation (+,-,*,/) :\n");
        scanf(" %c", &operator);
        float res = Calc(num1, num2, operator);
        printf("the result is : %.2f\n", res);

        return 0;
    }
        