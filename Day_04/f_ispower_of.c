#include<stdio.h>
int main(){
	int i,n,r=n,p=0;
	printf("entre n");
	scanf("%d",&n);
	
   while(r%2==0&&r>0){
   r=r/2;
   p++;
}
printf("%d = pow(2,%d)+%d",n,p,r);
	return 0;
}
