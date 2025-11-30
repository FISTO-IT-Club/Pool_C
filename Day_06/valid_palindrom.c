#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool check_palindrome(char *string, int left, int right) {
    if (left >= right)
      return true;
    else if (string[left] == string[right]) 
      return check_palindrome(string,left+1, right-1);
    else
      return false;
}
bool is_pal_tail(char *string) {
    int length =strlen(string);
      if (length ==0 || length ==1)
        return true;
    return check_palindrome(string,0,length-1);
}
int main()
{
   char *test ="level";
   if (is_pal_tail(test))
     printf(" '%s' is a palindrome \n", test);
    else
       printf(" '%s' is not a palindrome \n", test);
       return 0;
}