#include <stdio.h>

int if_insert_pos(int arr[], int size, int n) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == n) {
            return i;  
        }
    }
    return size; 
}


int main() {
    int tab[] = {3, 8, 5, 14, 2, 20};
    int length = sizeof(tab) / sizeof(tab[0]);

    int res = if_insert_pos(tab, length,2);

    printf("res : %d\n", res);
    return 0;
}
