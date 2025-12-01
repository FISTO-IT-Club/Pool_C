#include <stdio.h> 

#include <math.h> 


float hist[5]; 
int h=0; 


int main(){ 
    char c; 
    float x, y; 

    while(1){ 
        printf("C > "); 
        scanf(" %c", &c); 

        if(c=='q') break; 

        switch(c){ 
            case '+': 
                scanf("%f %f", &x, &y); 
                printf("%.2f\n", x+y); 
                hist[h++%5]=x+y; 
                break; 

            case '-': 
                scanf("%f %f", &x, &y); 
                printf("%.2f\n", x-y); 
                hist[h++%5]=x-y; 
                break; 

            case '*': 
                scanf("%f %f", &x, &y); 
                printf("%.2f\n", x*y); 
                hist[h++%5]=x*y; 
                break; 

            case '/': 
                scanf("%f %f", &x, &y); 
                if (y!=0) printf("%.2f\n", x/y); 
                hist[h++%5]=x/y; 
                break; 

            case 'p': 
                scanf(" %c", &c); 
                scanf("%f", &x); 
                if(c=='2') x=x*x; 
                else x=x*x*x; 
                printf("%.2f\n", x); 
                hist[h++%5]=x; 
                break; 

            case 's': 
                scanf("%f", &x); 
                printf("%.2f\n", sqrt(x)); 
                hist[h++%5]=sqrt(x); 
                break; 

            case 'f': 
                scanf("%f", &x); 
                y=1; 
                for(int i=1;i<=x;i++) y=y*i; 
                printf("%.2f\n", y); 
                hist[h++%5]=y; 
                break; 

            case 'h': 
                for(int i=0;i<5;i++) 
                    printf("%.2f ", hist[i]); 
                printf("\n"); 
                break; 

            default: 
                printf("?\n"); 
        } 
    } 

    return 0; 
} 
