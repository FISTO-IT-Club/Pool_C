#include <stdio.h>

int f_ispowerof2(int x) {
	
    printf("Entrer un nombre: ");
    scanf("%d", &x);
    if (x <= 0)
        return 0;

    while (x % 2 == 0) {
        x = x / 2;
    }

    return (x == 1);
    
    
}

int main() {
    
          int  f_ispowerof2(x);

    return 0;
}
