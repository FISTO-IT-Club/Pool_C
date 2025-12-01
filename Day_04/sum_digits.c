int sum_digits(int n)
{
    int i = 0;
    int sum = 0;

    while (i <= n)
    {
        sum += i;
        i++;
    }
    return sum;
}