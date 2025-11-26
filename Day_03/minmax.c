#include <stdio.h>
int minmax(int tab[], int taille, int* min, int* max){
    if(taille<=0) return 1; 
    *min=tab[0];
    *max=tab[0];
    for(int i=1;i<taille;i++){
        if(tab[i]>*max) *max=tab[i];
        if(tab[i]<*min) *min=tab[i];
    }
    return 0;
}
int main(){
    int tab[]={10,100,1,1000};
    int taille=sizeof(tab);
    int min, max;
    if(minmax(tab,taille,&min,&max)==0){
        printf("min: %d \n max: %d\n",min,max);
    } else{
        printf("ERROR\n");
    }
    return 0;
}