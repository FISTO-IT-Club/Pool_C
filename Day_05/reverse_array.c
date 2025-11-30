#include <stdio.h>

void reverse_array(int arr[]) {
    for (int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int myarr[6] = {1, 2, 3, 4, 5, 6};
    reverse_array(myarr);
    return 0;
}