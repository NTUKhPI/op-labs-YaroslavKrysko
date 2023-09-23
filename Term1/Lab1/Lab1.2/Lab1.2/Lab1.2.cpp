
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double a = 0.0;
    double b = 0.0;
    double d = 0.0;
    double p = 0.0;
    double S = 0.0;
    cout << "Формула для знаходження площі трикутника " << endl;
    while (true) {
        cin >> a >> b >> d;
        p = (a + b + d) / 2;
        S = sqrt(p * (p - a) * (p - b) * (p - d));
        if (a <= 0 && b <= 0 && d <= 0) {
            cout << "Введіть правильні числа " << endl;
            continue;
        }
        else {
            cout << S;
        }
    }
    return S;
}