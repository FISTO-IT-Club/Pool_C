#include <stdio.h>

int sum_array(int array[]){
    int sum =0;
    for (int  i = 0; i < 5; i++)
    {
        sum+=array[i];
    }
    return sum;
}
int main(){
    int array[5];
    printf("print array's element ");
    for (int  i = 0; i < 5; i++)
    {
        printf("array[%d]=\n",i);
        scanf("%d",&array[i]);
    }
    
    printf("sum of 5-int array is %d ",sum_array(array));
    return 0;
}