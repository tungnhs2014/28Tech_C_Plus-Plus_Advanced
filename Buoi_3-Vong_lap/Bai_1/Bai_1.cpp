#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n, S = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        S += i;
    }

    cout << S;
    
    return 0;
}