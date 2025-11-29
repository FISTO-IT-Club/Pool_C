#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool is_pall_tail(const char *s,int start,int end){
	if(start>=end){
	return true;}
	if (s[start]!=s[end]){
		return false ;
	}
	return is_pall_tail(s,start+1,end-1);
	
}
int main(){
	char str[100];
	printf("enter une chaine :\n ");
	scanf("%s",str);
	int len= strlen(str);
	if (is_pall_tail(str,0,len-1)){
		printf("%s est un palendrom !",str);
	}else{
		printf("%s n'est pas un palendrom !",str);
	}
	return 0;
}
