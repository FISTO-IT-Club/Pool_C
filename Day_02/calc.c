#include <stdio.h>

int main() {
  char op;
  float a, b, res;
  printf("Enter operation (+ - * /) followed by two numbers:\n");
  if (scanf(" %c %f %f", &op, &a, &b) != 3)
    return 0;
  if (op == '+')
    res = a + b;
  else if (op == '-')
    res = a - b;
  else if (op == '*')
    res = a * b;
  else if (op == '/') {
    if (b == 0) {
      printf("Error: division by zero\n");
      return 0;
    }
    res = a / b;
  } else {
    printf("Unknown operation\n");
    return 0;
  }
  printf("%f\n", res);
  return 0;
}
