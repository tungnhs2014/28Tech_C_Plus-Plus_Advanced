#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n; 
    cin >> n;

    for (int i = 0; i <= n; i += 3) {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 1; i <= n; i *= 2) {
        cout << i << " ";
    }
    cout << endl;

    for (int i = n; ; i ++) {
        if (i % 17 == 0) {
            cout << i;
            break;
        }
    }
    cout << endl;

    for (int i = n -1; i >= 0 ; i --) {
        if (i % 7 == 0) {
            cout << i;
            break;
        }
    }
    cout << endl;

    int kc = 0;
    for (int i = 1; i <= n ; i += kc) {
        cout << i << " ";
        kc++;
    }
    cout << endl;

    return 0;
}