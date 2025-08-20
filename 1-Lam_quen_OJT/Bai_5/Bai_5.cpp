#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;

    cout << fixed << setprecision(2) << sqrt(N) << endl;
    cout << fixed << setprecision(3) << cbrt(N) << endl;

    return 0;
}
