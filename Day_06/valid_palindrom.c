#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool is_pal_tail(char *s, int start,int end){
    
    if(start >= end) return 1;
    if(s[start] != s[end]){
        return 0;
    }
    return is_pal_tail(s, start+1, end-1);

}

int main(void){
    char str[100];
    printf("enter a string:");
    scanf("%S",&str);
    if(is_pal_tail(str, 0, (int)strlen(str)-1)){
        printf("true");
    }else{
        printf("false");
    }
} 