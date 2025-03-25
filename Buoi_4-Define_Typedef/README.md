# Phần 4: Define và Typedef

## 1. Typedef: Type Definition
- `Typefef` là một từ khóa được sử dụng để **tạo một tên mới** (bí danh alias) cho những kiểu dữ liệu của ngôn ngữ lập trình C/C++ như: **int, long long, float, string, vector,...** hoặc những **kiểu dữ liệu mà người dùng định nghĩa** (user define) như struct, class.
- Giúp **tăng tốc độ code** bằng cách định nghĩa lại kiểu dữ liệu với các **tên thay thế** ngắn gọn.

### Ví dụ
```cpp
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef int songuyen;
typedef string xau;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main(int argc, char const *argv[]) {
    ll x; // long long x
    songuyen y; // int y
    xau z; // string z
    vi a; // vector<int> a
    pi b; // pair<int, int> b
}
```
---

## 2. Define
- Tương tự như `typedef` thì `define` cũng có thể **định nghĩa tên mới cho kiểu dữ liệu**, ngoài ra nó còn định nghĩa được cho cả những **giá trị** hoặc **cú pháp**

### Ví dụ
- Định nghĩa lại kiểu
```cpp
#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define songuyen    int

int main(int argc, char const *argv[]) {
    ll x; // long long x
    songuyen y; // int y
}
```
- Định nghĩa giá trị
```cpp
#include <bits/stdc++.h>
using namespace std;

#define PI      3.14
#define MOD     100000007
#define _28tech "GOOD"

int main(int argc, char const *argv[]) {
    cout << Pi << endl;
    cout << MOD << endl;
    cout << _28tech << endl;
}
/*
 Output:
    3.14
    100000007
    GOOD
*/
```

- Định nghĩa cấu trúc
```cpp
#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b)    for (int i = (a); i < (b); i++)
#define fastIO          ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x)          begin(x), end(x)
#define duyet(a)        for(auto it : a){cout << it << ' ';}

int main(int argc, char const *argv[]) {
    fastIO;
    FOR(i, 0, 5) cout << i << ' ';
    vector<int> a = {5, 1, 2, 3, 4};
    sort(all(a));
    duyet(a);
}
/*
 Output:
    0 1 2 3 4
    1 2 3 4 5
*/
```

--- 

## 3. Sự khác nhau giữa typedef và #define
- `Typedef`
    + Được xử lý bởi complier.
    + Chỉ định nghĩa được kiểu dữ liệu với tên mới.
    + Kết thúc bằng ;
- `#define`
    + Được xử lý bởi preprocesser.
    + Chỉ định nghĩa được kiểu dữ liệu, giá trị, cấy trúc.
    + Kết thúc không có ;