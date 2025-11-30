#include<stdio.h>
int if_insert_pos(int arr[], int size, int n){
    int i;
    for(i = 0; i < size; i++){
        if(arr[i] >= n){
            return i;
        }
    }
    return size;
}
int main(){
    int arr[] = {1, 3, 5, 6};
    int size =4;
    int n = 5; 
    int pos =if_insert_pos(arr, size, n);
    printf("La valeur %d doit être insérée à l'indice : %d\n", n, pos);
    return 0;
}