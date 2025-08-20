#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{   
    int n;
    cin >> n;
    long long tong = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            tong += i;
        }
        else {
            tong -= i;
        }
    }

    cout << tong;

    return 0;
}