#include<stdio.h>
int main()
int n;

 {
    printf("Entrez n : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erreur : n doit être >= 0\n");
        return 1;
    }
}
 