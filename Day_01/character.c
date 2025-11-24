#include <stdio.h>
#include <unistd.h>

void printCharacter(char a){
    write(STDOUT_FILENO, &a, 1);
}

int main (int argc, char *argv[]) {
    printCharacter('N');
    return 0;
}