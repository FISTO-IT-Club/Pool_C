#include <stdio.h>

#define len 5

int sum_array(int arr[]) {
    int i, sum=0 ;
    for(i=0; i<len; i++)
        sum = sum + arr[i] ;

    return sum ;
}


int main() {
    int T[len]={3, 7, 10, 5, 5} ;
    printf("la somme des éléments du tabeau est: %d", sum_array(T) ) ;
}