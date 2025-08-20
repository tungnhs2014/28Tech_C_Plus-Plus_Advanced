#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    long long a, b, k;
    cin >> a >> b >> k;

    if (k % 2 == 0) {
        cout << (k / 2) * a - (k / 2) * b;
    }
    else {
        cout << (k / 2 + 1) * a - (k / 2) * b;
    }

    return 0;
}