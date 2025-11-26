#include<stdio.h>
void remove_int(int arr[], int size , int target){
    for (int i =0; i<size ; i++){
        if(arr[i]==target){
            for(int j= i; j<size-1; j++){
                arr[j]= arr[j+1];
            }
            size--;
            i--;
        }
    }
   
}
int main(){
    int arr[] = {2, 6, 8, 2, 5}, size = 5, target;
    printf("le tableau avant la suppression:");
    for(int i = 0; i < size; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    printf("veillez saisir l'element a supprimer:");
    scanf("%d", &target);
    remove_int(arr, size, target);
    printf("le tableau apres la suppression de %d, nouvelle taile %d :",target ,size);
     for(int i = 0; i < size; i++){
        printf("%d", arr[i]);
    }
    return 0;
}
