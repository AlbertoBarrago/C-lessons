#include <stdio.h>

//Global variable
int x = 0;

int incr(int value) {
  x = x + value;
  printf("%d\n", x);
  return x;
}

int main(void) {
  printf("Hello world\n");
  int value = 3;
  incr(3);
  return 0;
}
