#include <stdio.h>

void two_sum(int arr[], int size, int target) {
    for (int i = 0; i < size ; i++)
    {
       for (int j = i+1; j < size; j++)
       {
        if ((arr[i] + arr[j]) == target)
        { 
        printf(" output indices %d | %d ",i+1,j+1); // i+1,j+1 affiche l'indice pour logique de l'utilisateur
        return;
       }
       
    }
}
 printf("no solution found\n");
}


int main () {

    int array[]={2,7,1,5};
    int size_u=4;
    int target_u=6;

    two_sum(array, size_u, target_u);




    return 0;
}