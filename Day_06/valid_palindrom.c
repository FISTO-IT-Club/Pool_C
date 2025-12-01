#include<stdio.h>
#include<string.h>
// more variables is not allowed.
int is_pal_tail(char *s, int left, int right)
{
    if (left >= right)
        return 1;  
    if (s[left] != s[right])
        return 0;  
    return is_pal_tail(s, left + 1, right - 1);
}
int main(void)
{
    char mot[100];
    printf("Entrer un mot : ");
    scanf("%s", mot);

    int len = strlen(mot);

    if (is_pal_tail(mot, 0, len - 1))
        printf("%s est un palindrome\n", mot);
    else
        printf("%s n'est pas un palindrome\n", mot);

    return 0;
}
