#include <stdio.h>
int if_insert_pos(int arr[], int size, int n) {
	int cont = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] < n)
		cont++;
    }
    return cont;
}
int main() {
    int n;
    int arr[] = {1, 3, 5, 7, 45, 10, 6, 14, 12, 21};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("les elements du tableau sont:");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Entrer un nombre:");
    scanf("%d", &n);
    int pos = if_insert_pos(arr, size, n);
    printf("la Position de ce nombre dans le tableau est: %d\n", pos);
    return 0;
}