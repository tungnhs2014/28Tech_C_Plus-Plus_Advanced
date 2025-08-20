#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    long long N;
    cin >> N;

    cout << N * 2 << endl;
    cout << N * 10 << endl;
    cout << N / 2 << endl;
    cout << fixed << setprecision(3) << double(N) / 2 << endl;
    
    return 0;
}
