#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n; 
    cin >> n;
    
    int i = 3;
    while(i <= n){
        cout << i << " ";
        i += 3;
    }
    cout << endl;

    i = 0;
    while(i < n){
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " ";
        }
        i++;
    }
    cout << endl;

    for (int i = n; ;i++) {
        if (i % 7 == 0) {
            cout << i;
            break;
        }
    }
    cout << endl;

    for (int i = n; i >= 0 ;i--) {
        if (i % 9 == 0) {
            cout << i;
            break;
        }
    }
    cout << endl;

    i = 1;
    while (i < 2 * n) {
        cout << i << " ";
        i += 2;
    }
    
    return 0;
}