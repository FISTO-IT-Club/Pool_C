
#include <stdio.h>
#include <stdbool.h> 

bool is_powerof3(int n)
{
    if (n == 1)
        return true;
    if (n <= 0 || n % 3 != 0)
        return false;
    return is_powerof3(n / 3);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (is_powerof3(n))
        printf("%d is a power of 3\n", n);
    else
        printf("%d is not a power of 3\n", n);
    return 0;
}