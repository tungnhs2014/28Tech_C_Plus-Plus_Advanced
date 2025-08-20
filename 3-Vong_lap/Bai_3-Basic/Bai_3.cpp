#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n; 
    cin >> n;

    for (int i = 1; i <= n; i ++) {
        cout << i << " ";
    }
    cout << endl;

    for (int i = n; i >= 0; i --) {
        cout << i << " ";
    }
    cout << endl;
    
    for (int i = 0; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i <= n; i += 4) {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 97; i <= 97 + n -1; i ++) {
        cout << (char)i << " ";
    }
    cout << endl;

    for (int i = 122 - n + 1; i <= 122; i ++) {
        cout << (char)i << " ";
    }
    cout << endl;
    return 0;
}