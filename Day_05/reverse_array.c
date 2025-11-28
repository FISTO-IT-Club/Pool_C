#include <stdio.h>
int main(){
    int tableau[5]={1,2,3,4, 5,6}; 
    printf("tableau inverse : \n");
    for(int i=5;i>=0;i--) printf(" %d ", tableau[i]);
    printf(" \n");
    return 0;
}
