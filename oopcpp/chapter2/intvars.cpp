//intvars.cpp
//работа с переменными целого типа
#include <iostream>
using namespace std;
int main(){
  int var1;                   //описание переменной var1
  int var2;                   //описание переменной var2
  var1 = 20;                  //присвоение значения переменной var1
  var2 = var1 + 10;           //присвоение значения переменной var2
  cout << "var1+10 равно: ";  //вывод строки
  cout << var2 << endl;       //вывод значения переменной var2
  return 0;
}
