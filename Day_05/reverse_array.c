#include<stdio.h>
void reverse_array(int arr[]) {
    int i,j;
    int n = 5 ;
    for(i=0,j=n-1;i<j;i++,j--) {
        int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
    }
}
int main() {
    int arr[]={1,2,3,4,5};
    int i ;
    for(i=0;i<5;i++) {
        printf("%d\n",arr[i]);

    }
    reverse_array(arr);
    for(i=0;i<5;i++) {
        printf("%d\n",arr[i]);
    }


}