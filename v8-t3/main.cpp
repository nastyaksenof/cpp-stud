#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x = 0, a = 0, b = 0;
    cout << "Чему равно X: ";
    cin >> x;
    cout << "Чему равно A: ";
    cin >> a;
    cout << "Чему равно B: ";
    cin >> b;
    double y = 1 / sin(x) * exp(-b) * log(a + b);
    cout << y;

    return 0;
}
