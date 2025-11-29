#include <stdio.h>



int sqrt_x(int nbr) {
    if (nbr < 0) {
        return -1;
        
    }else {
        int i =0;
        while(i*i <= nbr){
            i++;
        }
        return i-1;
    }
}
int main() {
    int nb ;
    printf(" Entrer a number : \n");
    scanf("%d",&nb);
    printf("the square root of %d is %d\n",nb,sqrt_x(nb));
}