int if_insert_pos(int arr[], int size, int n) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == n)
            return i;

        if (arr[i] > n)
            return i;
    }
    return size; 
}