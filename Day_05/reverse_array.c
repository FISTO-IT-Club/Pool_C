#include <stdio.h>

void reverse_array(int arr[]) {
    int i;

    for (i=4; i>=0; i--) {
        printf("%d\n", arr[i]);
    }
}

int main(){
    int array[5];
    int p;

    for (p=0; p<5; p++) {
        printf("tapez l'elment %d : ", p);
        scanf("%d", &array[p]);
    }

    reverse_array(array);
}