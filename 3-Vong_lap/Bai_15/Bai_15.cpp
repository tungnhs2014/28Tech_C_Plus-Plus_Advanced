#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    int n;
    cin >> n;
    int tich = 1;

    for (int i = 1; i <= n; i ++) {
        tich *=i;
    }

    cout << tich;

    return 0;
}