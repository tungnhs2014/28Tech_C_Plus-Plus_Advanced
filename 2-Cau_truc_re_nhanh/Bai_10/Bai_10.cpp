#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;

    if ( a > 0 && b > 0 && c > 0 && (a + b) > c && ( a + c > b) && (b + c > a)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    
    return 0;
}
