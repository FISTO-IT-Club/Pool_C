int f_ispowerof2(int x)
{
    if (x <= 0)
        return 0;
    while (x % 2 == 0)
        x /= 2;
    return x == 1;
}
