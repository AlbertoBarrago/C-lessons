#include <stdio.h>

// Global variable
int x = 0;
float y = 1.234;

int incr(int value) {
  x = x + value;
  printf("%d\n", x);
  return x;
}

int main(void) {
  printf("Hello world\n");
  int value = 3;
  incr(3);
  printf("%.3f\n", y);
  //If we use unsigned the value will be 128 otherwhise -127
  char c = 127;
  c++;
  printf("%d\n", c);
  return 0;
}
