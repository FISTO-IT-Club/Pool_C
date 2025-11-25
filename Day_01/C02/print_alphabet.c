#include <stdio.h>
#include <unistd.h>

void print_alphabet(){
    for (char i = 'a'; i <= 'z'; i++)
    {
       write(1,&i,1);
    }

}
int main (){

  print_alphabet();
  return 0;
}
