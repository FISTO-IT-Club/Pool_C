int factorial(int nb) {
    if (nb <= 1)
        return 1;
    return nb * factorial(nb - 1);
}