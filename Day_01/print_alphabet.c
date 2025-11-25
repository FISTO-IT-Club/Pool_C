#include<stdio.h>
#include<unistd.h>

void print_alphabet(void);

int main(){
	print_alphabet();
	return 0; 
}

void print_alphabet(void){
	char s ='a';
   while( s<='z'){
		write(1,&s,1);
		s++;
	}		
}
