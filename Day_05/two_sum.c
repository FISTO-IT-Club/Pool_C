//two_sum.c

#include <stdio.h>

void two_sum(int arr[], int size, int target) {
    int i, j;
    int found = 0;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("[%d,%d]\n", i, j);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("Aucune paire trouvee\n");
    }
}

int main() {
    int arr[] = {2, 5, 8, 1, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    two_sum(arr, size, target);
    return 0;
}
