#include<stdio.h>
int if_insert_pos(int arr[], int size, int n){
    for(int i = 0; i<size; i++){
        if(arr[i] == n || arr[i] > n){
            return i;
        }
    }
    return size;
}
int main(){
int arr[] = {1, 2, 6, 7, 10};
int size = 5, n;
printf("veillez saisir un nombre:");
scanf("%d",&n);
printf("la position de l'element chercher est:%d",if_insert_pos(arr[size], size, n) );
}