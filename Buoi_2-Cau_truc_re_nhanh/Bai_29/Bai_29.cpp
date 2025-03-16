#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b % a == 0) {
        int q = b / a;
        if (c == b * q && d == c * q) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    else {
        cout << "NO\n";
    }

    return 0;
}