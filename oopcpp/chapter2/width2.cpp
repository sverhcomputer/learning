// применение манипулятора setw
#include <iostream>
#include <iomanip>  // для использования setw
using namespace std;
int main() {
    long pop1 = 8425785, pop2 = 47, pop3 = 9761;
    cout << setw(9) << "Город " << setw(12)
    << "Нас." << endl
    << setw(9) << "Москва" << setw(12) << pop1 << endl
    << setw(9) << "Киров" << setw(12) << pop2 << endl
    << setw(9) << "Угрюмовка" << setw(12) << pop3 << endl;
    return 0; } 
