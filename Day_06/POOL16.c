long long fib_tail(int n, long long a, long long b) {
    if (n == 0) {
        return a;
    }
    return fib_tail(n - 1, b, a + b);
}