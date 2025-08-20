#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    
    if ((N % 400 == 0) || ((N % 4 == 0) && (N % 100 != 0))){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}
