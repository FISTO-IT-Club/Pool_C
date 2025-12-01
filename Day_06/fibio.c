long long fib_tail(int n, long long a, long long b)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    return fib_tail(n - 1, b, a + b);  
}
