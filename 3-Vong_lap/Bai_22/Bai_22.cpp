#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    int n; 
    cin >> n;

    // Hinh 1
    for (int i = 1; i <= n; i++) { // n hang
        for (int j = 1; j <=i; j++) { // moi hang co n ky tu
            cout << "*";
        }
        cout << endl;
        
    }
    cout << endl;

    // Hinh 2
    for (int i = n; i >= 1; i--) { // n hang
        for (int j = 1; j <=i; j++) { // moi hang co n ky tu
            cout << "*";
        }
        cout << endl;
        
    }
    cout << endl;

    // Hinh 3
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
        
    }
    cout << endl;


     // Hinh 4
     for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
        
    }
    cout << endl;


     // Hinh 5
     for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=i; j++) { 
            if (i == 1 || i == n || j == 1 || j == i) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
        
    }
    cout << endl;
   
    return 0;
}