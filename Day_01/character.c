#include <unistd.h>

void print_char(char c)
{
    write(1, &c, 1);
    write(1, "\n", 1);
}
int main(){ 
    print_char('B');
    return 0;
    
}

// void print_char(char c)
// {
//     printf("Charactere : %c\n", c);
// }

// int main()
// {
//     char c ;
//     printf("Enter a character: ");
//     scanf("%c", &c);
//     print_char(c);
//     return 0;
// }