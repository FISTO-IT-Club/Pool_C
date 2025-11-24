#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]) {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (x < 0) {
        printf("Error! Square root of negative numbers is undefined.\n");
    } else {
        double result = sqrt((double)x);
        int floor_result = (int)result;
        if(result == floor_result) {
            printf("Square root of %d is %d\n", x, floor_result);
        } else {
            printf("Square root of %d is %d floored\n", x, floor_result);
        }
    }
    return 0;
}