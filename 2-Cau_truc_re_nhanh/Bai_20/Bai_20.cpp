#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long m, n, a;
    cin >> n >> m >> a;

    long long x = m / a;
    long long y = n / a;
    
    if (m % a != 0) {
        x += 1;
    }

    if (n % a != 0) {
        y += 1;
    }

    cout << x * y;
    
    return 0;
}