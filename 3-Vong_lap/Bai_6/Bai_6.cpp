#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n;
    int tong = 0;
    cin >> n;

    for (int i = 1; i <= sqrt(n); i ++) {
        if (n % i == 0) {
            tong += i;
            // i => uoc j nam tu sqrt(n) -> j = n / i
            if (n / i != i) {
                tong += n / i;
            }
        }
    }
    
    cout << tong;

    return 0;
}