#include<stdio.h>
#include<stdbool.h>
bool is_powerof3(int n){
	if(n < 0){
        return false;
    }
    while (n % 3 == 0) {
        n /= 3;
    }
    return n == 1;
}
int main() {
    int n;
    printf("Enter un entier :");
    scanf("%d", &n);
    if (is_powerf3(n)) {
        printf("%d est une puissance de 3.\n", n);
    } else {
        printf("%d n'est pas une puissance de 3.\n", n);
    }
    return 0;
}
