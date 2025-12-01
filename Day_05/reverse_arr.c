#include <stdio.h>

void reverse_array(int arr[]) {
    printf("reversed array ");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    
    int arr[] = {1, 2, 3, 4, 5};
    
    reverse_array(arr);
    
    return 0;
}