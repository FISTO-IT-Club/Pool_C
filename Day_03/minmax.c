#include <stdio.h>

int min_max(int arr[], int n, int *min, int *max) {
    for (int i = 0; i < n; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
    return 0;
}

int main() {
    int tab[] = {3, 8, 5, 14, 2, 20};
    int min = tab[0];
    int max = tab[0];

    int length = sizeof(tab) / sizeof(tab[0]);

    min_max(tab, length, &min, &max);

    printf("min : %d\nmax : %d\n", min, max);
    return 0;
}
