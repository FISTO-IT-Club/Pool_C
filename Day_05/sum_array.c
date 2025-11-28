#include <stdio.h>
int sum_array(int arr[],int n){
	int sum=0;
	int i;
    for (i=0;i<n;i++){
        sum = sum + arr[i];
}
    return sum;
}   
int main(){
    int t[5] = {1, 2, 3, 4, 5};
    int s=sum_array(t,5);
    printf("%d\n",s);}