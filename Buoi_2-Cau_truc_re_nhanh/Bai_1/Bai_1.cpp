#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long x;
    cin >> x;

    long long sum = (long long)x*x*x + (long long)3*x*x + x + 1;

    cout << sum;

    return 0;
}
