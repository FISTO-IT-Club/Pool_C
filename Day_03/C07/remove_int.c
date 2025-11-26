#include <stdio.h>

int  remove_int(int arr[], int size, int target) {
    int j =0;
    for(int i = 0; i < size ;  i++) {

  if (arr[i] != target)
  {
     arr[j] =arr[i];
     j++;

  }  
    }

return j;


}
int main ()  {
   int array[]={1,2,5,6,5,5,7,8};
   int sizee=8;
   int target = 5;
   int New_00=remove_int(array,sizee,target);
   for ( int i = 0; i < New_00; i++)
   {
    printf("%d ", array[i]);
   }
   printf("\nNew size = %d\n", New_00);
   


}