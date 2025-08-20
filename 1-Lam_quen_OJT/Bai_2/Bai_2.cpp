#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char const *argv[])
{
    int X; 
    long long Y;
    char C;
    float F;
    double D;

    cin >> X; 
    cin >> Y; 
    cin >> C; 
    cin >> F;
    cin >> D;

    cout << X << endl;
    cout << Y << endl;
    cout << C << endl;
    cout << fixed << setprecision(2) << F << endl;
    cout << fixed << setprecision(9) << D << endl;

    return 0;
}
