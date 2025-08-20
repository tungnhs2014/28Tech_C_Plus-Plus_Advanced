#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    double a;
    cin >> a;

    if (abs(a - (int)a < 0.5)){
        cout << (int)a;
    }
    else {
        cout << (int)a + 1;
    }

    return 0;
}