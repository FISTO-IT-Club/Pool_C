#include <stdio.h>
#include <unistd.h>

void printCharacter(char a){
    // Don't know why you decided to use write instead of printf here but okay
    // I don't think the others would know about standard streams, or was it already taught?
    write(STDOUT_FILENO, &a, 1);
}

int main (int argc, char *argv[]) {
    printCharacter('N');
    return 0;
}