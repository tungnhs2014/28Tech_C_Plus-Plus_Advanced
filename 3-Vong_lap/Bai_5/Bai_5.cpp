#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    double tong = 0;
    cin >> n;

    for (int i = 2; i <= 2*n; i += 2) {
        tong += 1.0/i;
    }
    
    cout << fixed << setprecision(5) << tong;
    
    return 0;
}