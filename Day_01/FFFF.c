#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char nom[30];
	char pnom[30];
	long CNE;
	int age;
}Etudiant;

int main(){
	Etudiant E;
	printf("lire les données relatives :\n");
	gets(E.nom);
	gets(E.pnom);
	scanf("%ld",&(E.CNE));
    scanf("%d",&(E.age));
    printf("les données relatives de Etudiant 1:\n Nom:%s\n Pnom:%s\n CNE:%ld\n Age:%d",E.nom,E.pnom,E.CNE,E.age);
	
	return 0;
}
