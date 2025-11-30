#include <stdbool.h>
#include <string.h>
#include <stdio.h>

bool is_pal_tail_rec(char *s, int start, int end) {
    if (start >= end)
        return true;         

    if (s[start] != s[end])
        return false;          

    return is_pal_tail_rec(s, start + 1, end - 1);
}
int main(){
	char s[]="madam";
	if(is_pal_tail_rec(s,0,strlen(s)-1)){
		printf("%s est une palindrome.\n",s);
	}
	else{
		printf("%s n'est pas un palindromr.\n",s);
	}
}
