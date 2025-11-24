#include<stdlib.h>
#include<unistd.h>

void print_char(char a);

int main(){	
    char a = 'S';
	print_char(a);
	return 0;
}
void print_char(char a){
	write(1,&a,1);
}
