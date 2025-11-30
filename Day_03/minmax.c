#include<stdio.h>
int min_max(int arr[],int size, int *min, int *max ){
    if(size<=0) 
    return 0;
    *min = arr[0];
    *max = arr[0];
    for (int i = 1 ; i <= size ;i++){
        if(arr[i]<*min)
        *min = arr[i];
        if (arr[i]>*max)
        *max = arr[i];
    }

}
int main(){
    int s=5 , min , max ;
    int arr[]={5, 2, 10, 5,20};
    min_max(arr[s],s,&min,&max );
    printf("le minimum est:%d , et le maximum est:%d", min , max);
    return 0;
}