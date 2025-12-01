#include<stdio.h>
int sqrt_x(int nb) {
    int i;
    for(i=1;i<=nb;i++){
    	if(nb==i*i){
    		return i;
		}
	}
     




}

int main(){
    int nb;
    printf("entrer nb");
    scanf("%d",&nb);
    printf("la racine est %d",sqrt_x(nb));

}
