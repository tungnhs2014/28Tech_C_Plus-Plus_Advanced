#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    int n; 
    cin >> n;

    if (n == 0 || n == 1) {
        cout << -1;
    }
    else {
        if (n % 2 == 0){
            cout << n /2 << endl;
            for (int i = 1; i <= n/2; i++) {
                cout << 2 << " ";
            }
        }
        else {
            cout << (n - 3) / 2 + 1<< endl;
            for (int i = 1; i <= (n - 3)/2; i++) {
                cout << 2 << " ";
            }
            cout << 3;
        }
    }
    return 0;
}