#include<stdio.h>
float calcul(float a,float b,char op){
    if(op=='+'){
                    printf("%f +%f=",a,b);

     return a+b;

    }
    else if(op=='-'){
                    printf("%f-%f=",a,b);

            return a-b;
    }
    else if(op=='*'){
            printf("%f *%f=",a,b);

        return a-b;
;
    }
    else if(op=='/'){
    if(b!=0){
            printf("%f/%f=",a,b);

            return a/b;
    }
    }
}

float calAdv(float n,char x){
    int i;
    float prod;
    if(x=='√'){
         i=0;
        while(n>i*i){
                i++;
        }
            printf("sqrt %f=",n);
            return i;
        }

    else if(x=='2'){
     printf("%f ^2=",n);

            return n*n;

    }
    else if(x=='3'){
        printf("%f^3=",n);

            return n*n*n;
    }

    else if(x=='!'){
            printf("%f !=",n);
            if(n==0){
                    return 1;
            }
            else{
        prod=1;
        for(i=1;i<=n;i++){
                prod=prod*i;

        }
            }
            return prod;

    }
}
typedef struct Element Element;
struct Element{
    float val;
    Element *suivant;
};
typedef struct Pile Pile;
struct Pile{
    Pile *tete;
};
void empiler(Pile *pile,float nv,float nvv){
    {

        Element *nouveau=malloc(sizeof(*nouveau));
        if(pile==NULL || nouveau==NULL){
            exit(0);
        }
                nouveau->val=nv;
                nouveau->val=nvv;

        nouveau->suivant=pile->tete;
        pile->tete=nouveau;

    }
    }
float depiler(Pile *pile){
        float nb=0;
        Element *parcour=pile->tete;
        if(pile!=NULL ||pile->tete!=NULL){
        nb=parcour->val;
        pile->tete=parcour->suivant;
        free(parcour);
    }
    return nb;
}
    void affiche(Pile *pile){
        Element *actuel=pile->tete;
        while(actuel!=NULL){
                printf("%f\n",actuel->val);
        }

}




int main(){
    float a,b,n;
    char x;
    printf("entrer loperation");

    scanf(" %c",&x);
    if(x=='+'||x=='-'||x=='*'||x=='/'){
    printf("entrer nombre");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("resultat:");
    printf("%f",calcul(a,b,x));
    }
    else if(x=='√'||x=='2'||x=='3' ||x=='!'){
            printf("entrer le nombre");
    scanf("%f",&n);

    printf("%f",calAdv(n,x));
    printf("history of 5");

    }
    Pile *p;
    p=(Pile*)malloc(sizeof(Pile));
    if(p==NULL){
        exit(0);
    }
        p->tete=NULL;
        empiler(p,calAdv(n,x),calcul(a,b,x));
                empiler(p,calAdv(n,x),calcul(a,b,x));
                        empiler(p,calAdv(n,x),calcul(a,b,x));
                                empiler(p,calAdv(n,x),calcul(a,b,x));
                                        empiler(p,calAdv(n,x),calcul(a,b,x));  // i dont any adea I just tried to do something about history^_^
                                        affiche(p);   







}

