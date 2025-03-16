#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long m, n;
    cin >> m >> n;

    if (m % 2 == 0) {
        cout << (m / 2) * n;
    }    
    else {
        cout << ((m -1) / 2) * n + n / 2;
    }
    return 0;
}