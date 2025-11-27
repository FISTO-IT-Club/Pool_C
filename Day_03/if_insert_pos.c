#include <unistd.h>
int if_insert_pos(int arr[], int size, int n) {
  int i = 0;
  while (i < size) {
    if (arr[i] == n)
      return i;
    if (arr[i] > n)
      break;
    i++;
  }
  return i;
}
