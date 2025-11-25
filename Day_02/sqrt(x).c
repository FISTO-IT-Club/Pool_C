#include<stdio.h>
#include<math.h>
int main(){
	int nb,r;
	printf("enter nb");
	scanf("%d",&nb);
	if(nb>0){

	r=sqrt(nb);
	printf("sqrt(%d)=%d",nb,r);
}
else{
	printf("erreur");
}
return 0;
}
