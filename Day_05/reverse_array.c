#include <stdio.h>
#include <stdlib.h>

void reverse_array(int arr[]) {
    int i,a;
    const float n=5/2;
    for (i=0;i<n;i++) {
        a= arr[i];
        arr[i]= arr[5 - 1 - i];
        arr[5 - 1 - i]= a;
    }
}

int main() {
    int T[5] = {1,2,3,4,5};
    printf("Notre tableau est T=[1,2,3,4,5]\n");
    reverse_array(T);
    printf("Votre tableau inverser: [");
    for (int i = 0; i < 5; i++) {
        printf("%d ", T[i]);
    }
    printf("]");
    return 0;
}