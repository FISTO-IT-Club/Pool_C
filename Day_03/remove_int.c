#include <stdio.h>

int remove_int(int tab[], int size, int target) {
    if (tab == NULL || size <= 0) {
        return 0;
    }
    
    int new = 0;
    for (int i = 0; i < size; i++) {
        if (tab[i] != target) {
            tab[new] = tab[i];
            new++;
        }
    }
    
    return new; 
}


void print_array(int tab[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", tab[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}
