#include <stdio.h>
#include <math.h>

int sqrt_x(int nb) {
    return (int)sqrt(nb);
}
int main(){
    int s = sqrt_x(25);
    printf("the sqrt is : %d",s);

}