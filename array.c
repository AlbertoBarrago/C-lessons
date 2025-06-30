#include <stdio.h>

int main(void) {
  int a[5] = {10, 5, 50, 100, 7};
  printf("%d\n", a[0]);
  char str[6] = {'h', 'e', 'l',
                 'l', 'o', 0}; // zero is null terminator in decimal set
  printf("%s\n", str);
  return 0;
}
