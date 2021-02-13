#include <stdio.h>

/* подсчёт строк во входном потоке */
main() {
  int c, nl;

  nl = 0;

  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++nl;
  printf("%d\n", nl);}
