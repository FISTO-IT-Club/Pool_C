#include <stdio.h>


   int sum_array(int arr[]) {
      
    int somme=0 ;

     for (int i = 0; i < 5; i++)
     {
        somme += arr[i];
     }
     return somme; 
}


   int main() {

    int array[]={1,5,6,22,7};
    int reselt=sum_array(array);
    printf("le somme est %d : ",reselt);

    return 0;
   }