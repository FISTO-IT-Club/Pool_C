#include<stdio.h>

void reverse_array(int arr[]) {
    int j = 0;
    for (int i=4;i>2; i--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j++;
    }
}

int main() {
    int tab[] = {1,2,3,4,56,7,8,9};

    reverse_array(tab);
    int len = sizeof(tab) / sizeof(tab[0]);
    for (int i = 0;i<len;i++) {
           printf("%d ",tab[i]);
    }
    printf("\n");

    return 0;
}