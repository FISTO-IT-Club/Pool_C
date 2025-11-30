#include<stdio.h>
int main(){
	char op;
	float x,y,r;
	printf("entre x");
	scanf("%f",&x);
	printf("entre opperateur");
	scanf(" %c",&op);
	printf("entre y");
	scanf("%f",&y);
	if(op=='+'||op=='-'||op=='*'||op =='/'){

	switch (op){
		case '+':
			r=x+y;
			break;
			case '-':
				r=x-y;
				break;
				case '*':
					r=x*y;
					break;
					case '/':
						if(y!=0){
							r=x/y;
						}
						else{
							printf("impossible");
							return 1;
						}
						break;
	}

printf("%.2f %c %.2f = %.2f\n ",x,op,y,r);}
else 
printf("erreur");
return 0;
}
