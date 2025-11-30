#include <stdio.h>
#include <limits.h>
int min_max(int arr[], int *min, int *max ) {
*min = INT_MAX;
*max = INT_MIN;
for (int i = 0; i < 5; i++) {
if (arr[i] < *min){
*min = arr[i];}
if (arr[i] > *max){
*max = arr[i];}
}
int main() {
int arr[5] = {1, 2, 3, 4, 5};
int min, max;
min_max(arr, &min, &max);
printf("le min %d  le max %d\n", min, max);
    return 0;
}