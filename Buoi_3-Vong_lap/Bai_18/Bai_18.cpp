#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    long long n;
    cin >> n;

    int count = 0;
    
    while (n != 0) {
       int r = n % 10;
       if (r == 2 || r == 3 || r == 5 || r == 7) {
            count++;
       }
       n /= 10;
    }
    
    cout << count;
    
    return 0;
}