#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
   
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int k256 = min({k2, k5, k6});
    int k32 = min({k3, k2 - k256});

    cout << k256 * 256 * 1ll + k32 * 32 * 1ll;

    return 0;
}