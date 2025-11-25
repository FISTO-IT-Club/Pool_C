#include <stdio.h>
#include <stdbool.h>

int sqrt(float n){
    if (n < 1 )
    {
        return 0;
    }
    

    int i = 1;
    
    while (true){
        if ((i *i) <= n && (i + 1) *(i + 1) > n) {
            return i;
        }
        i++;
    }
}

int main() {
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    printf("Square root of %0.2f is %d \n", n, sqrt(n));
    return 0;
}