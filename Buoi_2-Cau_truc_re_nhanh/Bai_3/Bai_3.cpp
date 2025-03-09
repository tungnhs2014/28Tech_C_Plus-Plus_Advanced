#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int C;
    cin >> C;

    double F = (C * 9/5.0) + 32;

    cout << fixed << setprecision(2) << F;

    return 0;
}
