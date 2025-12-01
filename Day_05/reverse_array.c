#include <stdio.h>

void reverse_array(int arr[]){
    for(int i=4;i>=0;i--) printf("%d%c",arr[i], i? ' ':'\n');
}

int main(void){
    int a[5];
    for(int i=0;i<5;i++) if(scanf("%d",&a[i])!=1) return 0;
    reverse_array(a);
    return 0;
}

