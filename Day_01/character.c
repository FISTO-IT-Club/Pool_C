#include <unistd.h>
 
void print_char(char a){
   write(1, &a, 1);
    }

int main(){
    char x = 'A';
    print_char(x);
    return 0;
}
