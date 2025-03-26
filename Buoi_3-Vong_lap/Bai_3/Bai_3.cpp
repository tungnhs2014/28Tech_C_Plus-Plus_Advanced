#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    long long tong = 0;
    cin >> n;

    for (int i = 0; i <= n; i += 3) {
        tong += i;
    }
    
    cout << tong;
    
    return 0;
}