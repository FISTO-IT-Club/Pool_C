#include <stdio.h>
int sum_array(int arr[]) {
    int i, sum = 0;
    for (i = 0; i < 5; i++) {
        sum=sum+arr[i];
    }
    return sum;
}
int main() {
    int arr[5];
    int i, resultas;
    printf("Enter 5 nombres :\n");
    for (i = 0; i < 5; i++) {
        printf("le nombre %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    resultas = sum_array(arr);
    printf("la somme des 5 nombre = %d\n", resultas);
    return 0;
}
