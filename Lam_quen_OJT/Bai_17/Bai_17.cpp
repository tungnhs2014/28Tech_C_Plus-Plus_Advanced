/*
Nhập vào chiều dài và chiều rộng của HCN bạn hãy in ra chu vi và diện tích của HCN đó theo yêu cầu.

Chú ý tích diện tích có thể bị tràn

Đầu vào
1 dòng duy nhất gồm chiều dài và chiều rộng

Ràng buộc
Chiều dài, rộng là số nguyên dương không quá 10^6

Đầu ra
In ra chu vi, diện tích theo mẫu

Ví dụ
Input
39 22

Output
Chu vi HCN la : 122
Dien tich HCN la : 858

*/

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
