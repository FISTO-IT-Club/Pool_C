#include <stdio.h>

void reverse_array(int arr[]) {
	int i;
    for ( i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[5] = {2, 7, 11, 15, 4};

    reverse_array(arr);

    return 0;
}

