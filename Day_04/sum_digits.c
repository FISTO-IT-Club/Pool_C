int f_ispowerof2(int x) {
    int i,s;
    s=0;
    for(i=0;i<=x;i++){
        s=s+i;
        
    }
    return s;
}
int main(){
    int n=8;
    printf("%d",f_ispowerof2(n));


}