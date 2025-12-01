#include <unistd.h>
void remove_int(int arr[], int size, int target) {
  int i = 0;
  int j = 0;
  while (i < size) {
    if (arr[i] != target) {
      arr[j] = arr[i];
      j++;
    }
    i++;
  }
}
