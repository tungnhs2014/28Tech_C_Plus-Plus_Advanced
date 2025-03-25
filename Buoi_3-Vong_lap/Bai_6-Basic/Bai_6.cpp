#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long n, S = 0; 
    cin >> n;

    while (n >= 10) {
        int r = n % 10;
        n /= 10; 
        S += abs(r - n % 10);
    }

    cout << S;
    
    return 0;
}