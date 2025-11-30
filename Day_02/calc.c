#include <stdio.h>

void calc (void) {
    float a;
    float b;
    float c;
    char op;
   printf("enter first number :") ;
  scanf("%f", &a) ;
   printf("enter second number :") ;
  scanf("%f", &b) ;
   printf("enter operation (+, -, *, /):") ;
  scanf(" %c",&op) ;
if(op=='+')
c=a+b ;
else if(op=='-')
c=a-b ; 
else if(op=='*')
c=a*b ; 
else if(op=='/') {
    c=a/b ; 
if(b==0)
printf("error\n") ;
}
else {
    printf("invalid operation .\n") ;
    }
}