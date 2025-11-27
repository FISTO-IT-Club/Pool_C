#include <stdio.h>

int sum_digits(int n) {
    int holder = n-1;
    while (holder != 0){
        n += holder;
        holder --;
    }

    return n;
}

int main() {
    printf("%d", sum_digits(100));
    return 0;
}