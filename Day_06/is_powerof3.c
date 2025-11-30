#include <stdio.h>
#include <stdbool.h>

bool is_powerof3(int n) {
    int i;
    unsigned char phrase;

    for (i=1; i<n; i++) {
        if (n == i*i*i) {
            printf("x is a power of 3");
            return true;
        }
        else {
            return false;
        }
    }
    return 0;
}

int main(){
    int number;

    printf("tapez la vleur de la nombre : ");
    scanf("%d", &number);
    is_powerof3(number);
}