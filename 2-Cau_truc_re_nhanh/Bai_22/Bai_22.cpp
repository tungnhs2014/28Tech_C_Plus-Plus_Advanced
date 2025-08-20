#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n, S;
    cin >> n >> S;

    if (S % n == 0) {
        cout << S / n;
    }
    else {
        cout << (S / n) + 1;
    }
    return 0;
}