#include <stdio.h>
/* подсчёт символов во входном потоке; 1-я версия */

main() {
  long nc;

  nc = 0;
  while (getchar() != EOF)
    ++nc;
  printf("%1d\n", nc);
}
