#include <stdio.h>
#include <stdlib.h>

int sum_array(int arr[]) {
    int i, some = 0;
    for (i=0;i<5;i++) {
        some+= arr[i];
    }
    return some;
}

int main() {
    int T[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("Notre tableau est T=[1,2,3,4,5,6,7,8,9,10]");
    int spme;
    spme= sum_array(T);
    printf("La some totale des elements du tableu est %d",spme);
}