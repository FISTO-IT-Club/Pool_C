int sqrt_x(int nb)
{
    int i = 0;

    if (nb < 0)
        return -1;

    while (i * i <= nb)
        i++;

    return i - 1;   // dernier i valide
}
