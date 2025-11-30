//valid_palindrom.c

#include<stdio.h>
#include<stdbool.h>
bool is_pal_tail(char *s,int start,int end){
  if(start>=end){
    return true;
  }
  if(s[start]!=s[end]){
    return false;
  }
  return is_pal_tail(s, start+1, end-1);
}

bool is_palindrome(char *s){
  int len=0;
  while(s[len]!='\0'){
    len++;
  }
  return is_pal_tail(s, 0,len-1);
} 

int main(){
  char*s1="madam";
  char *s2="hello";
  printf("%s est un palindrome: %s\n",s1, is_palindrome(s1)? "oui": "non");
  printf("%s est un palindrome: %s\n",s1, is_palindrome(s1)? "oui": "non");
  return 0;}
