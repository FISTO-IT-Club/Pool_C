#include <stdio.h>



int min , max ;
 int min_max(int arr[], int taille) {
        min = max = arr[0];
        for (int i = 1; i < taille; ++i) {
                if (arr[i] < min) min = arr[i];
               if (arr[i] > max) max = arr[i];
        }
        return 0;
        

    }
int main() {

    int array[] = {1, 4, 5, 8, 9};

    min_max(array, 5);
    printf("Le min est %d et le max est %d\n",min,max);
}
