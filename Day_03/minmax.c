#include <stdio.h>
#include <stdlib.h>

int min_max(int arr[],int  n,int *min,int *max) {
    
    int i;
    for (i=1;i<n;i++) {
        *min = arr[0];
        *max = arr[0];
        if (arr[i] < *min) 
            return *min = arr[i];
        if (arr[i] > *max) 
            return *max = arr[i];
    }
}

int main() {
    int Liste[] = {11,20,14,15,17,13,14};
    int n,min,max;
    n = sizeof(Liste) / sizeof(Liste[0]);
    /*min_max(Liste, n, *min, *max);*/
    /*min_max(Liste, n, min, max);*/
    min_max(Liste, n, &min, &max);
    printf("le minimale de votre liste est: %d et le maximale de votre liste est: %d\n", min, max);
    exit(0);
}