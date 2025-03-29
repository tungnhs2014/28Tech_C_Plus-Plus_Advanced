#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a1, a2, a3, b1, b2, b3, n;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;

    int cup = a1 + a2 + a3;
    int hc = b1 + b2 + b3;

    int x = 0, y = 0;

    if (cup % 5 == 0) {
        x = cup / 5;
    }
    else {
        x = cup / 5 + 1;
    }

    if (hc % 10 == 0) {
        y = hc / 10;
    }
    else {
        y = hc / 10 + 1;
    }

    if (x + y <= n) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}