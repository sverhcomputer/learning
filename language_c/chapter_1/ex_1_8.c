#include <stdio.h>

main() {
  int s;
  int ss, st, se, fs;

  ss = 0;
  st = 0;
  se = 0;
  fs = 0;

  while ((s = getchar()) != EOF) {
    if (s == ' ')
      ++ss;
    if (s == '\t')
      ++st;
    if (s == '\n')
      ++se;}
    printf("общее колличество пробелов: %d\n", ss);
    printf("общее колличество табуляции: %d\n", st);
    printf("общее колличество символов конца строки: %d\n", se);
    fs = ss + st + se;
    printf("общее колличество символов табуляции, пробелов и конца строки: %d\n", fs);}
