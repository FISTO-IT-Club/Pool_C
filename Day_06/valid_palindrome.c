#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool is_pal_tail(char *s){
    int n;
    char cp[50];
    strcpy(cp,s);
    strrev(cp);
    n=strcmp(cp,s);
    return n;
}
void main(){
    char chaine[50];
    printf("sisaire un chaine :");
   scanf("%s",&chaine);
    bool n=is_pal_tail(chaine);
    if(n==0){
        printf("la chaine est palindrome.");
    }else{
        printf("la chaine n est pas palindrome.");
    }

}