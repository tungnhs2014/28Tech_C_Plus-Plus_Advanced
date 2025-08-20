#include <iostream>
#include <iomanip>

using namespace std;

#define PI 3.14

int main(int argc, char const *argv[])
{
    int R;
    cin >> R;

    double CV = 2 * PI * R;
    double DT = PI * R * R;


    cout << fixed << setprecision(4) << CV << " " << DT; 

    return 0;
}
