#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_pal_tail(char*s) {
   int len=strlen(s) ;
   if(*s == *s+len) {
      len=len-1 ;
      return is_pal_tail(s-1) ;
   }
   return false ;
}

int main() {
   char s ;
   printf("taper une chaine de caractère:") ;
   scanf(" %c", &s) ;
   printf("%d", is_pal_tail(s)) ;
}
