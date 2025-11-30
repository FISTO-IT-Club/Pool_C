#include<stdio.h>
int if_insert_pos(int arr[], int size, int n) {
   int i;
    for (i = size-1; (i >=0 && arr[i] > n);i--) {

        arr[i+1] = arr[i];
           }
     arr[i+1] = n;
    size++;
}
int main() {
int n ;
int arr[10]={1,2,3,4,5,6};
   printf("donner un nombre pour inserer");
   scanf("%d",&n);
   if_insert_pos(arr,6,n);
   for (int i = 0; i < 10; i++) {
       printf("arr[%d] = %d\n",i,arr[i]);
   }
  return 0;
}