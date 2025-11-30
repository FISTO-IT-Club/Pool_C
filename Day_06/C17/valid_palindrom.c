#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_pal_tail_Recu( char *debut,char *fin ) {
         if (debut >= fin )
            return true;
             if (tolower(*debut) != tolower(*fin))
               return false;          
return is_pal_tail_Recu( debut +1 , fin- 1);
}

bool is_pal_tail(char *s ) {

    if ( s == NULL ) {
        return false ;
    }
    return is_pal_tail_Recu(s,s + strlen(s)-1);
}

int main() {
    char hello[50];
    printf("Entrer un string : \n");
    scanf("%49s",hello);
    if (is_pal_tail(hello))
    {
       printf(" C'est un palindrome ");
    }else
    printf("N'est pas un palindrome ");
    
}




