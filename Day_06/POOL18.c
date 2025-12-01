#include <stdio.h>
#include <string.h>

int TH (char *s, int l, int h) {
    if (l >= h) {
        return 1;
    }
    if (s[l] != s[h]) {
        return 0;
    }
    return TH (s, l + 1, h - 1);
}

int is_pal_tail(char *s) {
    int len = strlen(s);
    return TH (s, 0, len - 1);
}