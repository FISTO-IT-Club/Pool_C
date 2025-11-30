#include <stdio.h>
#include <stdbool.h>

   bool is_powerof3(int n) {
      
    while (n%3 == 0) {     
        n = n / 3;    
    }
       if (n==1){
         return true;
        }
      return false;
                
 }

int main() 
{
    int n=27;
   if (is_powerof3(n)) {
        printf("%d is  a power of 3", n);
    } else {
        printf("%d isn't a power of 3", n);
    }
    return 0;
}