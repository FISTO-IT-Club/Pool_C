#include<stdio.h>

void two_sum(int arr[], int size, int target) {

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("T = %d --> [%d,%d]\n",target,arr[i],arr[j]);
                return; 
            }
        }
    }
    printf("Aucune paire trouvée.\n");
}

int main() {
    int tab[] = {1,2,3,4,56,7,8,9};
    int len = sizeof(tab) / sizeof(tab[0]);
    two_sum(tab,len,4);

    return 0;
}