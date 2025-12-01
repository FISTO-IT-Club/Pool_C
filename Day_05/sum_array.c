#include <stdio.h>

int sum_array(int arr[]){
    int s=0;
    for(int i=0;i<5;i++) s+=arr[i];
    return s;
}

int main(void){
    int a[5];
    for(int i=0;i<5;i++) if(scanf("%d",&a[i])!=1) return 0;
    printf("%d\n",sum_array(a));
    return 0;
}

