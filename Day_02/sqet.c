int sqrt_x(int nb) {
    int i = 0;
    
    while (i * i <= nb)
        i++;
    
    return i - 1;
}