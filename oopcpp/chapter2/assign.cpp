// применение арифметических операций с присваиванием
#include <iostream>
using namespace std;
int main() {
    int ans = 27;
    ans += 10; // то же самое, что ans = ans + 10;
    cout << ans << ", ";
    ans -= 7; // то же самое, что ans = ans - 7;
    cout << ans << ", ";
    ans *= 2; // то же самое, что ans = ans * 2;
    cout << ans << ", ";
    ans /= 3; // то же самое, что ans = ans / 3;
    cout << ans << ", ";
    ans %= 3; // то же самое, что ans = ans % 3;
    cout << ans << endl;
    return 0;
}