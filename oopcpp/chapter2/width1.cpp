// демонстрирует необходимость применения манипулятора setw
#include <iostream>
using namespace std;
int main () {
    long pop1 = 4789429, pop2 = 274124, pop3 = 9761;
    cout << "Город        " << "Нас." << endl
    <<"Москва " << pop1 <<endl
    <<"Киров " << pop2 <<endl
    <<"Угрюмовка " << pop3 <<endl;
    return 0;
}