#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n, u1, d;
    cin >> n >> u1 >> d;

    long long un = u1 + (n -1) * d;
    cout << n * (u1 + un) /2 << endl;

    return 0;
}