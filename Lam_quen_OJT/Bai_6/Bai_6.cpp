#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double x;
    cin >> x;

    cout << (int)floor(x) << "\n";
    cout << (int)ceil(x) << "\n";
    cout << (int)round(x) << "\n";

    return 0;
}
