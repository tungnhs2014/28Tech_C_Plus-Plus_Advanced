#include <iostream>

using namespace std;

// Cong thuc chap 2 cua n cong thuc la n(n-1)/2

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << 1ll * n * (n - 1) / 2;

    return 0;
}