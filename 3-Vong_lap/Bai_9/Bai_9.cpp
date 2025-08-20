#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{   
    int n;
    cin >> n;
    long long add = 1;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            add *= i;
            if (n / i != i) {
                add *= n / i;
            } 
        }    
    }

    cout << add;
    
    return 0;
}