#include <stdio.h>
#include <stdbool.h>

bool is_powerof3(int n) {
    if (n < 1)   {
             return false ;
            }  
                  else if (n % 3 == 0)
           {
                    return   n /= 3 ; 
                     }
                       return  n==1 ;
                       }

int main () {
    int x;

    printf(" Entrer une nombre : ");
    scanf("%d",&x);
       
          if (is_powerof3(x))     {
                printf("True %d ",x);
          }else
                printf("False %d ",x);
          return 0;
}


