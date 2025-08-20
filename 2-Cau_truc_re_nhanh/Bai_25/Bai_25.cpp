#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    
    int ans = n / 100;
    n %= 100;
    ans += n / 20;
    n %= 20;
    ans += n / 10;
    n %= 10;
    ans += n / 5;
    n %= 5;
    ans += n;

    cout << ans;

    return 0;
}