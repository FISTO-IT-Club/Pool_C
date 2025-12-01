#include <unistd.h>

void print_alphabet(void)
{
    char c = 'a';
    while (c <= 'z')
    {
        // printf("%c", c);
        write(1, &c, 1); 
        c++;
    }
    // printf("\n");
    write(1, "\n", 1); 
}

int main(){

    print_alphabet();
    return 0;

}