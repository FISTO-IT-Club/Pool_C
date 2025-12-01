#include<stdio.h>

int sum_array(int arr[]) {
    int sum = 0;
    for (int i=0;i<5;i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {

    int tab[] = {1,2,3,4,56,7,8,9};

    int res = sum_array(tab);

    printf("res : %d\n",res);
    return 0;
}