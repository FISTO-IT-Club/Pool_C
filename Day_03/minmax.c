#include <stdio.h>
#include <limits.h>

int min_max(int tab[], int p, int *min, int *max) {
    
    if (tab == NULL || min == NULL || max == NULL || p<= 0) {
        return -1;
    }
    
    *min = tab[0];
    *max = tab[0];
    
    for (int i = 1; i < p; i++) {
        if (tab[i] < *min) {
            *min = arr[i];
        }
        if (tab[i] > *max) {
            *max = tab[i];
        }
    }
    
    return 0;
}
