int sum_digits(int n) {
    int sum = 0;
    int i;
    for (i = 0; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}