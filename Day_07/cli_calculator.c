#include<stdio.h>
#include<string.h>

#define Max_HISTORY 5

char history[Max_HISTORY][100];
int hist_count = 0;

void save_history(const char entr){
    if (hist_count < Max_HISTORY){
        strcpy(history[hist_count], entr);
        hist_count++;
    }else{
        for(int i=1; i < Max_HISTORY; i++){
            strcpy (history[i-1],history[i]);
            strcpy (history[Max_HISTORY], entr);
        }
    }
}

void show_history(){
    printf("     Last 5 calculations     \n");
    if (hist_count == 0){
        printf("no history yet!\n");
        return;
    }
    for(int i=0 ; i < hist_count ; i++){
        printf("%d. %s \n",i+1,history[i]);
    }
}
void showmenu(){
    printf("      Calculator      \n");
    printf("C - Calculate. \n");
    printf("H - View history. \n");
    printf("E - Exit. \n");
    printf("Enter your choice: \n");
}
int sqrt_x(){
    double nb;
    char line[100];
    int i;
    printf("enter a number:");
    scanf("%.2f",&nb);
    for ( i = 0 ; i*i <= nb ; i++){
        if(i*i==nb)
            return i;
    }
    return i - 1;
    printf("sqrt(%d) = %d \n",nb, sqrt_x(nb));
    sprintf(line,"sqrt(%d) = %d \n",nb, sqrt_x(nb));
    save_history(line);
}
void calc(void){
    double a, b, r;
    char op, line[100];
    printf ("enter two numbers:");
    scanf ("%.2f %.2f", &a,&b);
    printf("enter operator:(+,-,*,/):");
    scanf (" %c ", &op);
    switch (op)     
    {
    case '+':
    r = a + b;
    break;
    case '-' :
    r = a - b;
    break;
    case '*':
    r = a * b;
    break;
    case '/' :
    if(b = 0){
        printf("error!");
    }else{
    r = a / b;
    }
     break;
    default:
    printf("operator is invalid!");
        break;
    }
    printf("%.2f %c %.2f = %.2f \n",a,op,b,r);
    sprintf(line,"%.2f %c %.2f = %.2f",a,op,b,r);
    save_history(line);
}
int factorial () {
    double nb;
    double result=0;
    char line[100];
    printf("enter a number");
    scanf("%.2f",&nb);
    if (nb<0) return 0;
if ( nb == 0 || nb == 1 ) {
     result = 1 ;
} else {
    for ( int i = 1 ; i <= nb ; i++ ) {
        result *= i ;
    }
}
 printf("fact(%.2f) = %.2f \n",nb ,result);
 sprintf(line, "fact(%.2f) = %.2f \n",nb ,result);
save_history(line);
}
int pwr2(){
    double n;
    double result=n*n;
    char line[100];
    return result;
     printf("%.2f ^ 2 = %.2f \n",n,result);
    sprintf(line ,"%.2f ^ 2 = %.2f",n,result );
    save_history(line);
}
int pwr3(){
    double n;
    double result = n*n*n; 
    char line[100];
    printf("%.2f ^ 3 = %.2f \n",n,result);
    sprintf(line ,"%.2f ^ 3 = %.2f",n,result );
    save_history(line);
}

void menu(){
    printf("        Calculation menu      \n");
    printf("1 - Basic calculator (+,-,/,*). \n ");
    printf("2 - Factorial. \n ");
    printf("3 - Square root. \n");
    printf("4 - Power 2. \n");
    printf("5 - Power 3. \n");
    printf("E - Exit \n");
    printf("Enter your choice: \n");
}
int main(){
    char choice,c;
    do{
        showmenu();
        scanf("%c",&choice);
        if (choice == 'c' || choice == 'C'){
        menu();
        scanf("%c",&c);
        switch (c)
        {
        case '1':
            calc();
            break;
        case '2':
            factorial();
            break;
        case '3':
            sqrt_x();
            break;
        case '4':
            pwr2();
            break;
        case '5':
            pwr3();
            break;
        case 'E' || 'e':
            return 0;
        
        default:
            printf("invalid choice!");
            break;
        }

    }else if (choice == 'h' || choice == 'H'){
        show_history();
    }else if (choice == 'e' || 'E'){
        return 0;
    }else{
        printf("invalid option try again");
    }
    }while (choice != 'E' || choice != 'e');
    
return 0;
}