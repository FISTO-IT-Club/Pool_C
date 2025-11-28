#include<stdio.h>

void two_sum(int arr[], int size, int target){

    for(int i =0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] + arr[j] == target){
                printf("indices are: [%d,%d]", i, j);
                return;
            } 
        }
    }
    printf("target not found, please enter a different number!");
}

int main(){

    int arr[] = {2, 7, 11, 15},T = 22, s = 4;
    two_sum(arr, s, T);
    return 0;

}