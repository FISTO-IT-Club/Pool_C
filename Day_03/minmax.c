#include <unistd.h>
int min_max(int arr[], int size, int *min, int *max) {
  if (size <= 0)
    return 0;
  *min = arr[0];
  *max = arr[0];
  int i = 1;
  while (i < size) {
    if (arr[i] < *min)
      *min = arr[i];
    if (arr[i] > *max)
      *max = arr[i];
    i++;
  }
  return 1;
}
