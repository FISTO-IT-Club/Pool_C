#include<stdio.h>
int two_sum(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] + arr[j] == target) {
                return 1;
            }
        }
    }
    return 0;
    
}
int main() {
    int arr[5];
    int target;
    printf("Enter 5 numbers: ");
    for(int i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter target sum: ");
    scanf("%d", &target);
    if(two_sum(arr, 5, target)) {
        printf("Il existe deux nombres qui ajoutent jusqu'à %d\n", target);
    } else {
        printf("No deux nombres n'ajoutent jusqu'à %d\n", target);
    }
    return 0;
}