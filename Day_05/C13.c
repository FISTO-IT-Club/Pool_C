#include <stdio.h>

void reverse_array(int arr[]) {
    int i;

    printf("Affichage en sens inverse : ");
    for (i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[5];
    int i;

    printf("Veuillez entrer cinq valeurs :\n");

    for (i = 0; i < 5; i++) {
        printf("Valeur %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    reverse_array(arr);

    return 0;
}

