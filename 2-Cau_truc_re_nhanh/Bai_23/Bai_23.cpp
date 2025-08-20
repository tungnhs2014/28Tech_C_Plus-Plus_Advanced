#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n, m;
    cin >> n >> m;

    if (m > n) {
        cout << -1;
    }
    else {
        int Max = n; // n buoc 1
        int Min = n / 2; // n /2 buoc 2
        
        if (n % 2 == 1) {
            Min += 1;
        }
    
        long long a = Min;
        long long b = m;
        // Cac buoc di chuyen len toi bac n [Min, Max]
        // a = Min, b = m
        if (a % b == 0){
            cout << a;
        }
        else {
            cout << (a / b + 1) * b;
        }
    }
    return 0;
}