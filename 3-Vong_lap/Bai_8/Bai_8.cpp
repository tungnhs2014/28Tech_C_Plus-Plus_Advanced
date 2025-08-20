#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{   
    long long n;
    cin >> n;
    
    for (int i = 1; i <= sqrt(n); i++) {
        cout << 1ll * i * i << " ";
    }
    
    return 0;
}