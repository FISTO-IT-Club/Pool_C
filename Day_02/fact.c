#include <stdio.h>
int factorial(int nb){
    int result=1;
    for (int i=1;i<= nb;i++){
        result *=i;
    }
    return result;
}
int main(){
    int s = factorial(4);
    printf("the factorial is : %d",s);
    return 0;
}