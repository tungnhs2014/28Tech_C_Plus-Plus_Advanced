#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    long long a, b;
    cin >> a >> b;

    swap(a, b);
    
    cout << 128 * a + 97 * b + 1000 << endl;

    return 0;
}
