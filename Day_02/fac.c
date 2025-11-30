#include <stdio.h>
int factorial(int nb) {
    if(nb<0)
    { printf("entez un nombre positive");
         return -1;}
    else{
    if(nb==0)
     return 1;
    else return nb * factorial((nb-1));
    }}