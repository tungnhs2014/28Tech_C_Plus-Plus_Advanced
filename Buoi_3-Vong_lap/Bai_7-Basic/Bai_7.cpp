#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long n;
    cin >> n;

    int max_digit = n % 10;

    while (n != 0) {
        int r = n % 10;
        if (r > max_digit) {
            max_digit = r;
        }
        n /= 10;
    }

    cout << max_digit;

    return 0;
}