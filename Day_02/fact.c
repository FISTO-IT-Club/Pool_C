#include<stdio.h>
int factorial(int nb) {
    if (nb == 0 || nb == 1){
        return 1;
    }else{
        return nb * factorial(nb - 1);
    }
}
