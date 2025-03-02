#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> b >> a;

    cout << (a / b) << "\n";
    cout << fixed << setprecision(2) << ((double)a / b) << "\n";
    
    return 0;
}
