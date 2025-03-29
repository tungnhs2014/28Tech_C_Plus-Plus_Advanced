#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    long long n; 
    int count = 0;
    cin >> n;
    if (n == 0) {
        count << 1;
    }
    else {
        while (n != 0) {
            count++;
            n /= 10;
        }
    
        cout << count;
    }

    return 0;
}