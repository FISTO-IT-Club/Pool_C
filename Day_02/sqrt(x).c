#include <stdio.h>

int main (int argc, char *argv[]) {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (x < 0) {
        printf("Error! Square root of negative numbers is undefined.\n");
    } else {
        int result = 0;
        int i = 0;
        while(i * i <= x) {
            result = i;
            i++;
        }
        printf("The floored square root of %d is %d\n", x, result);
    }
    return 0;
}