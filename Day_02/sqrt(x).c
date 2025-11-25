#include<stdio.h>
#include<math.h>

int sqrt_x(int nb);

int main(){
	int n;
	printf("entrer un entier :\n");
    scanf("%d",&n);
    if(n<0){
	  printf("n\'admet pas de racine !");
    }else{
      printf("sqrt_xe(%d) est :%d\n",n,sqrt_x(n));
	}
	return 0;	
}
int sqrt_x(int nb){
	if(nb==0)
	   return 0;
	if(nb>0)
	   return sqrt(nb);	
}
