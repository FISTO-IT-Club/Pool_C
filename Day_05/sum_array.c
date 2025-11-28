#include <stdio.h>

int sum_array(int arr[]) 
  {
    int sum = 0,i;
    for (i=0; i<5; i++) {  
        sum += arr[i];
    }
    return sum;
  } 

int main() 
{
    int T[] = {1, 2, 3, 4, 5}; 
    printf("Sum of this array is: %d", sum_array(T));
    return 0;
}
