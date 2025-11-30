#include <stdio.h>
void reverse_array(int arr[], int n){
	printf("voici le tableau inverse \n")
    for (int i=n - 1;i>=0;i--){
    printf("%d \t",arr[i]);
    }
    printf("\n");
}
int main(){
    int t[5] = {1, 2, 3, 4, 5};
    reverse_array(t, 5);
}
