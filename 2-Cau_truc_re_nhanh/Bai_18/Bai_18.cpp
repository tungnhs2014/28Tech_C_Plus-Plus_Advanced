#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char c;
    cin >> c;

    if (c >= 'A' && c <= 'Z') {
        cout << (char)(c + 32);
    }
    else if (c >= 'a' && c <= 'z') {
        cout << (char)(c - 32);
    }
    else {
        cout << c;
    }
    return 0;
}