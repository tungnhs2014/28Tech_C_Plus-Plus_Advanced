#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    int n;
    cin >> n;
    int chaibia = n / 28;
    int vobia = chaibia;

    while (vobia >=3) {
        int r = vobia / 3; // so chai bia doi tu vo
        vobia = vobia -r*3; // so vo bia con lai sau khi doi
        chaibia += r;
        // uong het bia de sinh ra vo
        vobia += r;
        
    }
    cout << chaibia;
    return 0;
}