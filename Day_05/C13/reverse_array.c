#include <stdio.h>

void reverse_array(int arr[]) {
    for ( int i = 4; i >= 0; i--)
    {
        printf("%d",arr[i]);
    }
    printf("\n\n");
}


int main() {

    int array[]={2,4,3,6,4};
     printf("\n****Avant Reverse****\n");
    for (int i = 0; i < 5; i++)
    {
       printf("%d",array[i]);
    }
    
    printf("\n****Apres Reverse****\n");
    reverse_array(array);

    return 0;
}