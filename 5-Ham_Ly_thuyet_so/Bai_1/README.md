# Bài 1: Luyện Tập Viết Hàm - [Hàm, Lý Thuyết Số]
Cho số nguyên **n** không âm. Viết hàm xử lý các yêu cầu sau:

1. Kiểm tra **n** là số nguyên tố, nếu đúng in `1`, sai in `0`.
2. In **tổng chữ số** của **n**.
3. In **tổng chữ số chẵn** của **n**.
4. In **tổng chữ số nguyên tố** của **n**.
5. In **số lật ngược** của **n**. (Ví dụ: `123` in ra `321`)
6. In **số lượng ước của n là số nguyên tố** (làm tương tự phân tích thừa số nguyên tố).
7. In **ước nguyên tố lớn nhất của n** (làm tương tự phân tích thừa số nguyên tố).
8. Kiểm tra **n có tồn tại ít nhất một chữ số 6 hay không**, nếu đúng in `1`, sai in `0`.
9. Kiểm tra **tổng chữ số của n có chia hết cho 8 hay không**, nếu đúng in `1`, sai in `0`.
10. Tính **tổng giai thừa các chữ số** của **n**.  
    Ví dụ: `n = 123` → Tổng = `1! + 2! + 3!`.
11. Kiểm tra **n có phải chỉ được tạo bởi một chữ số hay không**.  
    Ví dụ: `222`, `333`, `99999`. Đúng in ra `1`, sai in ra `0`.
12. Kiểm tra **n có phải có chữ số tận cùng là lớn nhất hay không**.  
    Tức là không có chữ số nào của **n** lớn hơn chữ số hàng đơn vị của nó. Đúng in `1`, sai in `0`.
13. In **tổng lũy thừa chữ số của n với số mũ bằng số chữ số**.  
    Ví dụ: `123` → tính `1^3 + 2^3 + 3^3`.

## Constraints
- `2 <= n <= 1000`

## Input Format
- Một số nguyên duy nhất `n`.

## Output Format
- In ra **13 dòng**, mỗi dòng ứng với kết quả của một yêu cầu ở trên.

### Sample Input 0
```
36
```

### Sample Output 0
```
0
9
6
3
63
2
3
1
0
726
0
1
45
```

### Code tham khao
```cpp
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool ham1(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int ham2(int n){
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int ham3(int n){
    int sum = 0;
    while(n != 0){
        if(n % 10 % 2 == 0){
            sum += n % 10;    
        }
        n /= 10;
    }
    return sum;
}

int ham4(int n){
    int sum = 0;
    while(n != 0){
        int r = n % 10;
        if(r == 2 || r == 3 || r == 5 || r == 7)
            sum += r;
        n /= 10;
    }
    return sum;
}

int ham5(int n){
    int rev = 0;
    while(n){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int ham6(int n){
    int dem = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            ++dem;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n > 1)
        ++dem;
    return dem;
}

int ham7(int n){
    int ans;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            ans = i;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n > 1)
        ans = n;
    return ans;
}

int ham8(int n){
    while(n){
        if(n % 10 == 6)
            return 1;
        n /= 10;
    }
    return 0;
}

int ham9(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    if(sum % 8 == 0) return 1;
    else return 0;
}

int gt(int n){
    int res = 1;
    for(int i = 1; i <= n; i++)
        res *= i;
    return res;
}

int ham10(int n){
    int sum = 0;
    while(n){
        sum += gt(n % 10);
        n /= 10;
    }
    return sum;
}

bool ham11(int n){
    int r = n % 10;
    while(n){
        if(n % 10 != r)
            return false;
        n /= 10;
    }
    return true;
}

bool ham12(int n){
    int r = n % 10;
    while(n){
        if(n % 10 > r)
            return false;
        n /= 10;
    }
    return true;
}

int countDigit(int n){
    int dem = 0;
    while(n){
        ++dem;
        n /= 10;
    }
    return dem;
}

int ham13(int n){
    int sum = 0;
    int d = countDigit(n);
    while(n){
        sum += pow(n % 10, d);
        n /= 10;
    }
    return sum;
}

int main(){
    int n; cin >> n;
    cout << ham1(n) << endl;
    cout << ham2(n) << endl;
    cout << ham3(n) << endl;
    cout << ham4(n) << endl;
    cout << ham5(n) << endl;
    cout << ham6(n) << endl;
    cout << ham7(n) << endl;
    cout << ham8(n) << endl;
    cout << ham9(n) << endl;
    cout << ham10(n) << endl;
    cout << ham11(n) << endl;
    cout << ham12(n) << endl;
    cout << ham13(n) << endl;
}
```