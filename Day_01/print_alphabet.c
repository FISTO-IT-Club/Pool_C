#include <unistd.h>
 
void print_alphabet(void){
  
     //for(char C = 'A'; C <= 'Z'; C++)
     char alphabet[]= "abcdefghijklmnopqrstuvwxyz";
        write(1, alphabet, 26);
     //26 (bytes)
}

int main(){
   print_alphabet();
    return 0;
}