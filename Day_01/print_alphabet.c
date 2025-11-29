#include <unistd.h>

void print_alphabet(void) {
    char alpha[26];
    char c = 'a';
    for (int i=0; i<=25; i++) {
        alpha[i] = c;
        c += 1;
    }
    write(1, &alpha, 26);
}

// int main() {
//     print_alphabet();
//     return 0;
// }