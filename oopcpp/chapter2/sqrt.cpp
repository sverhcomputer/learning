// использование библиотечной функции sqrt()
#include <iostream> // для cout
#include <cmath> // для sqrt()
using namespace std;
int main() {
    double number, answer; // аргументы типа дабл для функции sqrt()
    cout << "Введите число: ";
    cin >> number;         // ввод числа
    answer = sqrt(number); // извлечениие корня
    cout << "Квадратный корень равен: "
    << answer << endl;     // вывод результата
    return 0;
}