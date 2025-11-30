#include <stdio.h>

int sum_array(int arr[]) {
    int i, sum=0;

    for (i=0; i<5; i++) {
        sum += arr[i];
    }
    return sum;
}

int main(){
    int array[5];
    int p, somme;

    for (p=0; p<5; p++) {
        printf("ecrire l'element %d : ", p);
        scanf("%d", &array[p]);
    }

    somme = sum_array(array);
    printf("la somme de les elments du tableau est : %d", somme);
}