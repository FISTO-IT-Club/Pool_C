
#include <stdio.h>

void minmax(const int *arr, int n, int *min, int *max) {
    if (n <= 0) {
        *min = 0;
        *max = 0;
        return;
    }

    int mn = arr[0];
    int mx = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] < mn) mn = arr[i];
        if (arr[i] > mx) mx = arr[i];
    }

    *min = mn;
    *max = mx;
}

int main(void) {
    int data[] = {3, 7, -2, 9, 4};
    int mn, mx;

    minmax(data, 5, &mn, &mx);

    printf("Min = %d, Max = %d\n", mn, mx);
    return 0;
}
