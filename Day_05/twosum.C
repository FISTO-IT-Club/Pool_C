#include <stdio.h> 
void two_sum(int arr[], int size, int target) {
	for (int i=0;i<size;i++){
        for (int j=i+1;j<size;j++) 
		{
            if (arr[i] + arr[j] == target){
                printf(" vioci les indices [%d, %d]\n",i+1,j+1);
                return;
            }
        }
    }
    printf("il n est ya pas 2 elements dont la somme est %d \n",target);
}
int main(){
    int t[]={2,7,20,17};
    two_sum(t,4,22);
}