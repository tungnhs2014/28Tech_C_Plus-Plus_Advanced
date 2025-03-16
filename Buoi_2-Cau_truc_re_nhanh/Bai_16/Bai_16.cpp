#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char c;
    cin >> c;

    if (c == 'z' || c == 'Z') {
        cout << 'a';
    }
    else if (c >= 'A' && c <= 'Z') {
        c += 32;
        c++;
        cout << (char)c;  
    } 
    else {
        c++;
        cout << (char)c;
    }

    return 0;
}