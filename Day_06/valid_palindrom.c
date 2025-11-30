#include<stdio.h>
#include<stdbool.h>
// your function returns directly true IF the first letter was the same as the last letter
// example: AZEA, A == A , but Z != E, so your function returns true immdeatly even tho Z != E
// but at least you've done your homework :) good job. by Ali
bool valid_palindrome(char *str) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }
    int left = 0, right = length - 1 ;
    while (left <= right) {
        if (str[left] != str[right]) {
            return false;

        }
        return true;
        left++;
        right--;
    }
}
int main() {
    char str[100]="non";
    valid_palindrome(str);
    if (valid_palindrome(str)) {
        printf("oui cest un palindrome");
    }else {
        printf("ce n'est pas un palindrome");
    }
}
