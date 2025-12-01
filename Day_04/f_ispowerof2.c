int f_ispowerof2(int x)
{
    if (x < 1)
        return 0;

    while (x % 2 == 0)
        x /= 2;

    if (x == 1)
        return 1;

    return 0;
}
