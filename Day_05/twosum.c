#include <stdio.h>
#include <stdlib.h>

void two_sum(int arr[], int size, int target) {
    int i,j;
    for (i=0;i<size;i++) {
        for (j=i+1;j<size;j++) {
            if (arr[i]+ arr[j]== target) {
                printf("[%d, %d]\n", i, j);
                return;
            }
        }
    }
}

int main() {
    int T[5] = {1,2,8,9,5}, target=10;
    printf("Notre tableau est T=[1,2,8,9,5]\n");
    two_sum(T,5,target);
}