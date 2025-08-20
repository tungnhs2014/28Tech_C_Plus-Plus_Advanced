#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    long long a, b;
    cin >> a >> b;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;

    if (b == 0){
        cout << "INVALID\n";
    }
    else{
        cout << fixed << setprecision(4) << double (a) / b << endl;
    }

    return 0;
}
