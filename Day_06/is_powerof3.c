//is_powerof3.c

#include<stdbool.h>
#include<stdio.h>
bool is_powerof3 (int n){
  if(n<1){
    return false;
  }
  while(n%3==0) {
    n/=3;
  }
  return n==1;
}

int main(){
  printf ("%d est une puissance de 3: %s\n",27, is_powerof3(27)? "Oui":"Non");
  printf ("%d est une puissance de 3: %s\n",12, is_powerof3(12)? "Oui":"Non");
  return 0;
}
