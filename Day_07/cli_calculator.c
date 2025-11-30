

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>                                                                                                                            
#include <math.h>
#include <string.h>

#define HISTORY_SIZE 5
#define HISTORY_FILE "calculator_history.txt"

  unsigned long long factorial(int n){

     if(n<=1) return 1 ;
     return n * factorial(n-1) ;
 }

   typedef struct{ // Pour stocker le history 
       char expr[100];
       double result;
 }History;

 History history[HISTORY_SIZE];
 int history_count=0;

 void add_history(const char* expr,double result){

if(history_count<HISTORY_SIZE){

  strcpy( history[history_count].expr,expr );

  history[history_count].result = result;

     history_count++;
}else{

for(int i=1; i<HISTORY_SIZE; i++){
 history[i-1]=history[i];

}

strcpy(history[HISTORY_SIZE-1].expr,expr);
history[HISTORY_SIZE-1].result=result;

}
}

 void show_history() {

  printf("\n--- Last %d calculations ---\n",HISTORY_SIZE);
    for(int i=0;i<history_count;i++){
       printf("%d: %s = %.2f\n",i+1,history[i].expr,history[i].result);
 }
     printf("----------------------------\n");
 }

  void save_history()  {

     FILE* f=fopen(HISTORY_FILE,"w");
        if(!f) return;
        for(int i=0;i<history_count;i++){
        fprintf(f,"%s = %.2f\n",history[i].expr,history[i].result);
}
    fclose(f);
}

    void load_history()  {

        FILE* f=fopen(HISTORY_FILE,"r");
         if(!f) 
         return;

char line[100];

while(fgets(line,sizeof(line),f)!=NULL){

    if(history_count<HISTORY_SIZE){

        char expr[100];
        double result;

        if(sscanf(line,"%[^=] = %lf",expr,&result)==2){
        strcpy(history[history_count].expr,expr);
        history[history_count].result=result;
        history_count++;
  }
  }
 }
       fclose(f);
}

int main() {
   int choice;
   double num1,num2,result;
   int fact_n;
   char expr[100];

      load_history();

       printf("  Simple CLI Calculator \n");

 while(1){
             printf("\n----------------------------------------\n");
             printf("Basic: [1] : +  [2] : -  [3] : *  [4]/\n");
             printf("Advanced: [5] : fact  [6] : sqrt(x)  [7] : pwr(2)  [8] : pwr(3)\n");
             printf("[9] : History  [0] : Exit\n");
             printf("Choice: ");
                
             if(scanf("%d",&choice)!=1){ while(getchar()!='\n'); continue; }
         
             if(choice==0){ save_history(); break; }
         
             if(choice==9){ show_history(); continue; }
         
             if(choice>=1 && choice<=4){

               printf("Enter first number: "); scanf("%lf",&num1);
               printf("Enter second number: "); scanf("%lf",&num2);

    }       else if(choice>=6 && choice<=8){

                      printf("Enter number: "); scanf("%lf",&num1);

    }       else if(choice==5){

               printf("Enter integer (0-20): "); scanf("%d",&fact_n);

    }       else{

               printf("Invalid choice!\n");

               continue;
    }

    int error=0;
    strcpy(expr,"");

    switch(choice){

        case 1: result=num1+num2; sprintf(expr,"%.2f + %.2f",num1,num2); 
        break;

        case 2: result=num1-num2; sprintf(expr,"%.2f - %.2f",num1,num2);
         break;

        case 3: result=num1*num2; sprintf(expr,"%.2f * %.2f",num1,num2);
         break;

        case 4: if(num2==0){ 
            printf("Error: Division by zero\n"); error=1;
         } 
                else{ result=num1/num2; 
                    sprintf(expr,"%.2f / %.2f",num1,num2); 
                } break;

        case 5: if(fact_n<0||fact_n>20 ) {
             printf("Error: must be 0-20\n"); 
             error=1; 
            } 
                else { result=factorial(fact_n); 
                    sprintf(expr,"%d!",fact_n); 
                }
                 break;

        case 6: if(num1<0) { printf("Error: Negative sqrt\n");
             error=1;
             } 

                else{ result=sqrt(num1);
                     sprintf(expr,"sqrt(%.2f)",num1);
                     } 
                     break;

        case 7: result=pow(num1,2);
         sprintf(expr,"%.2f^2",num1);
          break;

        case 8: result=pow(num1,3);
         sprintf(expr,"%.2f^3",num1);
          break;

        default: error=1;
    }

    if(!error){

        printf("Result: %.2f\n",result);
        add_history(expr,result);
        save_history();
    }
}

printf(" Thank u \n");
return 0;


}
