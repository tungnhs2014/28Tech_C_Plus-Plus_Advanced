#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    int n;
    cin >> n;
    long long tong = 0;

    for (int i = 1; i <= n; i ++) {
        tong += i * i * i;
    }

    cout << tong;

    return 0;
}