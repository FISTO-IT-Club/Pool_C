#include <stdio.h>

int main() {
    void reverse_array(int arr[]) {

     int arr[5];

    printf("Tableau original : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("Tableau à l'envers : ");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}    
}


   
