#include <stdio.h>
void reverse_array(int arr[]) {
    int i;
    printf("l'inversement de l'ordre des 5 nombres:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int arr[5];
    int i;
    printf("Enter 5 nombres:\n");
    for (i = 0; i < 5; i++) {
        printf("Nombre %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\noriginal:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    reverse_array(arr);
    return 0;
}
