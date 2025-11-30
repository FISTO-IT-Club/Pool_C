#include <stdio.h>
int sum_digits(int n) {
    int sum=0;
    for (int i=1; i<=n; i++) {
        sum=sum+i;
    }
    printf("%d",sum);
}
int main() {
    int n ;
    printf("donner un nombre:");
    scanf("%d",&n);
    sum_digits(n);
    return 0;
}