#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long lenth, width;
    cin >> lenth >> width;

    cout << "Chu vi HCN la : " << (lenth + width) * 2 << endl;
    cout << "Dien tich HCN la : " << lenth * width << endl;

    return 0;
}
