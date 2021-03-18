// работа со знаковыми и беззнаковыми переменными
#include <iostream>
using namespace std;
int main()
{
    int intVar = 1500000000; // 1 500 000 000
    intVar = (intVar * 10) / 10; // слишком большой результат
    cout << "Значение intVar равно " << intVar << endl; // неверный результат

    int intVar1 = 1500000000; // приведение к типу Дабл
    intVar = (static_cast<double>(intVar1) * 10) / 10;
    cout << "Значение intVar1 равно " << intVar1 << endl;
                            // верный результат
    return 0;

} // namespace std;

