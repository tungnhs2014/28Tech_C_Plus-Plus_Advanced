#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;
    cin >> x >> y;

    long long kq = 5 * x + 2 * y + (long long)x * y;

    cout << kq << endl;
      
    return 0;
}
