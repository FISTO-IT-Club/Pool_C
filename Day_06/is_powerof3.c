#include<stdio.h>
#include<math.h>
#include <stdbool.h>
bool is_powerof3(int n) {
    int i;
    if(n==0){
    	return false;
	}
    i=0;
    while(n>=pow(3,i)){
    	i++;
    if(n==pow(3,i)){
        return true;
    }
    }
    return false;
    }


int main(){
    int n=8;

    if(is_powerof3(n)){
        printf("it's power of 3");
    }
    else{
        printf("it's not");
    }
}