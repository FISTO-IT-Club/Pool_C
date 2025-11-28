#include <stdio.h>

int sum_array(int arr[]) {
    int sum = 0;              
    int i;
    for (i = 0; i < 5; i++) {  
        sum = sum + arr[i];        
    }
    return sum;               
}

int main() {
    int arr[5];  
    int i;

    printf("Entrez  cinq nombres:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);    
    }

    int S = sum_array(arr);    
    printf("La somme  est %d\n", S); 
    return 0;
}
