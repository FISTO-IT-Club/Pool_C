int factorial(int nb)
{
    if (nb < 0)
        return 0;          // convention: factorial negative = 0

    if (nb == 0 || nb == 1)
        return 1;

    return nb * factorial(nb - 1);
}
