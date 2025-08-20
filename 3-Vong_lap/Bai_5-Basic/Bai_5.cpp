#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n; 
    cin >> n;
    int r = n % 10; // Chu so cuoi cung
    while (n >= 10) {
        n /= 10;
    }
    cout << n << " " << r;
    return 0;
}