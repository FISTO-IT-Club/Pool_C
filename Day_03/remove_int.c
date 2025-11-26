#include<stdio.h>

void remove_int(int arr[], int size, int target) {
	int i,h=0;
	for (i=0;i<size;i++) {
        if (arr[i]!=target) {
            arr[h]=arr[i];
            h++;
        }
    }
	for (i=h;i<size;i++) {
        arr[i] = 0;
    }
}
int main(){
	int tab[]={2,5,1,5,6,5,9,5,0,5},i;
	remove_int(tab,10,5);
	printf("le tableau est:\n");
	for(i=0;i<10;i++)
	printf("%d ",tab[i]);
	
	return 0;
	}
	
	
	
 
