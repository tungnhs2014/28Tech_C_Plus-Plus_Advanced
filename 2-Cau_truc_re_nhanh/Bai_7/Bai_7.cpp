#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;

    cout << (a / b * b) << endl;

    if (a % b == 0)
        cout << a;
    else
        cout << (a/b + 1)* b << endl;

    return 0;
}
