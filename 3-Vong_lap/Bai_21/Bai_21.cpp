#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    int n; 
    cin >> n;
    
    // Hinh 1
    for (int i = 1; i <= n; i++) { // n hang
        for (int j = 1; j <=n; j++){ // moi hang co n ky tu
            cout << "*";
        }
        cout << endl;
        
    }
    cout << endl;

    // Hinh 2
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;

    // Hinh 3
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*";
            }
            else {
                cout << "#";
            }
        }
        cout << endl;
    }
    cout << endl;


     // Hinh 3
     for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << i << " ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}