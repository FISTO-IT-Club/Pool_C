#include <stdio.h>
#include <unistd.h>



 char print_character(char x) {
    write(1,&x,1);

}
 
int main () {
    char character = 's';
    print_character(character);
}
