#include<stdio.h>
void calc(void) {
	char op;
	float a , b , c; //a=ra9m1 b=ra9m2 c resultat

	printf("entrer le premier nombre\n");
		scanf("%f",&a);
			printf("entrer le deuxiéme nombre\n");
		scanf("%f",&b);
            printf("choisire l'opération (+,-,*,/)\n");
	    scanf(" %c",&op);
    if(op=='+')
    c=a+b;
    else if(op=='-')
    c=a-b;
    else if(op=='*')
    c=a*b;
    else if(op=='/'){
    	    c=a/b;
    if(b==0)
    printf("error\n");
	}
	else{
		printf("Invalid operation \n");
	}
    printf("%f",c);
}
int main() {
    calc();
    return 0;
}
