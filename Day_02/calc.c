#include <stdio.h>
void calc(void){
    int a, b;
    char op;
    printf ("entrer les deux nbrs:");
    scanf ("%d %d", &a,&b);
    printf("entrer l'operateur:(+,-,*,/):");
    scanf (" %c ", &op);
    switch (op)     
    {
    case '+':
    printf("%d + %d = %d", a , b , a + b);
    break;
    case '-' :
    printf("%d - %d = %d", a , b , a - b);
    break;
    case '*':
    printf("%d * %d = %d", a , b , a * b);
    break;
    case '/' :
    if(b = 0){
        printf("erreur!");
    }else{
    printf("%d / %d = %d", a , b , a / b);
    }
     break;
    default:
    printf("operateur saisit est invalide!");
        break;
    }
    
}
int main(){
calc();
return 0;
}