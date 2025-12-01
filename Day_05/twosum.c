#include <stdio.h>

void two_sum(int arr[], int size, int target){
    for(int i=0;i<size;i++)
        for(int j=i+1;j<size;j++)
            if(arr[i]+arr[j]==target){
                printf("[%d,%d]\n",i+1,j+1);
                return;
            }
    printf("[]\n");
}

int main(void){
    int a[5],t;
    for(int i=0;i<5;i++) if(scanf("%d",&a[i])!=1) return 0;
    if(scanf("%d",&t)!=1) return 0;
    two_sum(a,5,t);
    return 0;
}

