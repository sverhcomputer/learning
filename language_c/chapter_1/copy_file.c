#include <stdio.h>
/* копирование входного потока в выходной */
main() {
  int c;

  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}
