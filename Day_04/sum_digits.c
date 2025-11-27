#include <stdio.h>

int sum_digits(int n)
{
    int res = 0;
    if (n < 0) n = -n;
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }
    printf("Sum :%d\n", res);
    return res;
}

int main(){
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);
    sum_digits(n);
    return 0;
}