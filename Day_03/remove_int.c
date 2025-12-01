void remove_int(int arr[], int size, int target) {
    int index = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] != target) {
            arr[index] = arr[i];
            index++;
        }
    }
    for (int i = index; i < size; i++)
        arr[i] = 0;
}
