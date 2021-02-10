#include <stdio.h>

main() {
  int s, t, e;
  int ss, st, se, fs;

  ss = 0;
  st = 0;
  se = 0;
  fs = 0;

  while ((s = getchar()) != EOF) {
    if (s == ' ')
      ++ss;
    if (t == '\t')
      ++st;
    if (e == '\n')
      ++se;
  printf("Общее колличество пробелов: %d\n", ss);}

  while ((t = getchar()) != EOF){
    if (t == 'a')
      ++st;
  printf("Общее колличество символов конца строки: %d\n", st);}

  while ((e = getchar()) != EOF){
    if (e == '\n')
      ++se;
  printf("Общее колличество табуляций: %d\n", se);}

  if ((e = getchar()) == EOF)
    fs = ss + st + se;
    printf("Сумма пробелов, табуляция и символов конца строки = %d\n", fs);

}
