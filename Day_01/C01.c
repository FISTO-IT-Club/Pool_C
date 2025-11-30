#include <unistd.h>


// Function that prints a single character using write()
void print_char(char a) {
write(1, &a, 1);
}


int main(void) {
char c;


// Ask the user to enter a character
write(1, "Entrez un caractère: ", 21);


// Read one character from standard input
read(0, &c, 1);


// Print the character using our custom function
print_char(c);


// Print a newline for clean output
write(1, "\n", 1);


return 0;
}

