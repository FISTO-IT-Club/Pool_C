#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool is_pal_tail(char*s,int start,int end){
    if (start>= end) 
        return true;
    if (s[start]!=s[end])
        return false;
    return is_pal_tail(s,start+1,end-1);} 
    
    int main(){
    char str1[]="radar";
    if (is_pal_tail(str1,0,strlen(str1)-1))
        printf("%s est un palindrome\n",str1);
    else
        printf("%s n est pas un palindrome\n",str1);}
