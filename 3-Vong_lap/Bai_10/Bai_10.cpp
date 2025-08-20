#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{   
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        int N;
        cin >> N;

        if (N == 2022) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    
    
    return 0;
}