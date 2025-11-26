#include <stdio.h>
#include <stdlib.h>


void remove_int(int arr[], int size, int target) {
    int i,a;
    for (i=0;i<size;i++) {
        if (arr[i]== target) { /*a sera prend lindex de target choisi sur notre tableau*/
            a = i;
            break;
        }
    }
    if (a != -1) {
        printf("L'element %d a ete detecter sur la liste\n", arr[a]);
        for (i=a;i<size-1;i++) {
            arr[i] = arr[i + 1];
        }
    }
}

int main() {
    int arr[] = {0,1,2,3,4,5,6,7,8,9,10};
    int size = 11;
    int target = 7;  
    printf("Notre liste est: Liste=[0,1,2,3,4,5,6,7,8,9,10]\n");
    remove_int(arr, size, target);
    printf("La liste apres la suppression de l'element %d est: Liste=[", target);
    for (int i = 0; i < size - 1; i++) 
        printf("%d ", arr[i]);
    printf("]");
    exit(0);
}