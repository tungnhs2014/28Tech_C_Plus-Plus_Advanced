#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    double t1, t2, t3, t4;
    cin >> t1 >> t2 >> t3 >> t4;

    double dtb = (t1 + t2 + t3 * 3 + t4 *4) / 9.0;

    if (dtb >= 8) {
        cout <<"GIOI";
    }
    else if (dtb >= 6.5) {
        cout << "KHA";
    }
    else if (dtb >= 5) {
        cout << "TRUNG BINH";
    }
    else {
        cout << "YEU";
    }

    return 0;
}