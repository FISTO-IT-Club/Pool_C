#include <unistd.h>

int main(void)
{
    char c = 'A';  /* You can change the character here */

    write(1, &c, 1);  /* 1 = stdout */
    return 0;
}
