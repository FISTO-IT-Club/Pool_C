#include<stdio.h>


int sqrt_x(int nb)
{
    int compteur = 0;
 
    if (nb < 0)
        return -1;

    while (compteur * compteur <= nb)
        compteur++;

    return compteur - 1;
}
