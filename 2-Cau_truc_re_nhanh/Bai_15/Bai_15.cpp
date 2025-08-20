#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n, a, b;
    cin >> n >> a >> b;

    if (2 * a < b) {
        cout << n * a;
    }
    else {
        if (n % 2 == 0) {
           cout << (n / 2) * b; 
        }
        else {
            cout << (n / 2) *b + a; 
        }
    }

    return 0;
}