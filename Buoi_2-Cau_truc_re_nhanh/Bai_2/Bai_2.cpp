#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long a, b, c;
    cin >> a >> b >> c;

    long long S = a * (b + c) + b* (a + c);

    cout << S;

    return 0;
}
