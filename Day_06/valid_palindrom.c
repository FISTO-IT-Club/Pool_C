#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool is_pal_tail(char * s,int i,int j){
 while(i<j){
        if(s[i]!=s[j]){
   return false;
   }
 }
 return true;


   return is_pal_tail(s,i++,j--);

}
int main(){
     char s[7];
     int i=0,j=strlen(s);

    gets(s);
    if(is_pal_tail(s,i,j)){
        printf("palindrom");
    }
    else
        printf("not palindrom");


}
