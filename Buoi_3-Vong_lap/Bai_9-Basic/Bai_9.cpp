#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long n;
    cin >> n;

    if (n == 0) {
        cout << "28tech\n";
    }
    else {
        int cout_even = 0, cout_odd = 0;

        while (n != 0) {
            if ((n % 10) % 2 == 0) {
                cout_even++;
            }
            else {
                cout_odd++;
            }
            n /= 10;
        }
        
        if (cout_odd < cout_even) {
            cout << "28tech\n";
        }
        else {
            cout << "29tech\n";
        }
    }
    
    return 0;
}