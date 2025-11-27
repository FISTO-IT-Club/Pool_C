#include <stdio.h>

int if_insert_pos(int tab[], int size, int n) {
    int left = 0;
    int droit = size - 1;
    int result = size; 
    while (gauch <= droit) {
        int mil = gauch + (droit - gauch) / 2;
        
        if (tab[mil] == n) {
            return mil; 
        } else if (tab[mil] < n) {
            gauch = mil + 1;
        } else {
            result = mil; 
            droit = mil - 1;
        }
    }
    
    return result;
}
