#include <stdio.h>
#include <string.h>

double fact(double n){ return (n<=1)?1:n*fact(n-1); }
double my_sqrt(double x){ double r=x; for(int i=0;i<10;i++) r=0.5*(r+x/r); return r; }

int main(){
    char op[10]; double a,b,r,h[5]={0}; int i=0;
    while(1){
        printf("\n(+ - * / fact sqrt pwr2 pwr3 exit): ");
        scanf("%s",op);
        if(!strcmp(op,"exit")) break;

        if(!strcmp(op,"+")||!strcmp(op,"-")||!strcmp(op,"*")||!strcmp(op,"/")){
            scanf("%lf%lf",&a,&b);
            r = (!strcmp(op,"+"))?a+b :
                (!strcmp(op,"-"))?a-b :
                (!strcmp(op,"*"))?a*b :
                (b==0)?0:a/b;
        }
        else{
            scanf("%lf",&a);
            r = (!strcmp(op,"fact"))?fact(a):
                (!strcmp(op,"sqrt"))?my_sqrt(a):
                (!strcmp(op,"pwr2"))?a*a:
                (!strcmp(op,"pwr3"))?a*a*a:0;
        }

        printf("= %.2lf\n",r);
        h[i%5]=r; i++;
        printf("Hist: ");
        for(int j=0;j<5;j++) printf("%.2lf ",h[j]);
    }
}