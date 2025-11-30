#include "calculatrice.h" 

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

// int main(void){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("Factorial of %d is %d\n", n, factorial(n));
//     return 0;
// }


// int factorial(int n)
// {
//     // calculating factorial of a number
//     int res = 1, i;
//     for (i = 2; i <= n; i++)
//         res *= i;
//     return res;
// }

// int main()
// {
//     int num = 99;
//     printf("%d\n", factorial(num));
//     return 0;
// }