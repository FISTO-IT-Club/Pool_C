#include<stdio.h>
int sum_array(int arr[]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    int arr[5] = {1,2,3,4,5};
    sum_array(arr);
    printf("la somme =%d\n",sum_array(arr));
}