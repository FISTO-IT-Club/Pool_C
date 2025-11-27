#include <stdio.h>
#include <stdlib.h>

int if_insert_pos(int arr[], int size, int n) {
    int i;
    for (i=0;i<size;i++) {
        if (arr[i] >= n) {
            return i;
        }
        else if(arr[i]== n){
            return i;
        }
        else{
            break;
        }
        }
    return size;
}

/*int main() {
    int arr[] = {5,7,9,3,6,4,2};
    int size = 7
    int n = 7;
    int fonc; 
    fonc = if_insert_pos(arr, size, n);
    printf("L'index pour inserer %d est: %d\n", n, fonc);
    exit(0);
}*/
/*int main() {
    int arr[] = {5,7,9,3,6,4,2};
    int size = 7;
    printf("Notre liste est: Liste=[5,7,9,3,6,4,2]\n");
    printf("Entrer un valeur pour verifier leur existance sur le tableux:");
    int n;
    scanf("%d", n);
    int f;
    f = if_insert_pos(arr, size, n);
    printf("%d",f);
    return 0;
}*/
int main() {
    int arr[] = {5,7,9,3,6,4,2};
    int size = 6;
    printf("En vas chercher les nombre du 0 à 10 est ce qu'il existe sur notre liste:\n");
    printf("Pour 0: ");
    int f1 = if_insert_pos(arr, size, 5);
    printf("Il n'exist pas sur notre liste (leur index est %d\n",f1);
    printf("Pour 1: ");
    int f2 = if_insert_pos(arr, size, 1);
    printf("Il n'exist pas sur notre liste (leur index est %d\n",f2);
    printf("Pour 2: ");
    int f3 = if_insert_pos(arr, size, 2);
    printf("Il exist sur notre liste (leur index est %d\n",f3);
    printf("Pour 3: ");
    int f4 = if_insert_pos(arr, size, 3);
    printf("Il exist sur notre liste (leur index est %d\n",f4);
    printf("Pour 4: ");
    int f5 = if_insert_pos(arr, size, 4);
    printf("Il exist sur notre liste (leur index est %d\n",f5);
    printf("Pour 5: ");
    int f6 = if_insert_pos(arr, size, 5);
    printf("Il exist sur notre liste (leur index est %d\n",f6);
    printf("Pour 6: ");
    int f7 = if_insert_pos(arr, size, 6);
    printf("Il exist sur notre liste (leur index est %d\n",f7);
    printf("Pour 7: ");
    int f8 = if_insert_pos(arr, size, 7);
    printf("Il exist sur notre liste (leur index est %d\n",f8);
    printf("Pour 8: ");
    int f9 = if_insert_pos(arr, size, 8);
    printf("Il n'exist pas sur notre liste (leur index est %d\n",f9);
    printf("Pour 9: ");
    int f10 = if_insert_pos(arr, size, 9);
    printf("Il exist sur notre liste (leur index est %d\n",f10);
    printf("Pour 10: ");
    int f11 = if_insert_pos(arr, size, 10);
    printf("Il n'exist pas sur notre liste (leur index est %d\n",f11);
    
    return 0;
}
