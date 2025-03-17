# Phần 3: Vòng lặp (LOOP)

## 1. Vòng lặp for
Vòng lặp `for` là một cấu trúc vòng lặp được sử dụng khi biết trước số lần lặp. Vòng lặp sẽ lặp lại một khối lệnh cho đến khi điều kiện dừng không còn đúng

### Cú pháp
```cpp
for (khởi_tạo; điều_kiện; cập_nhật) {
    // Khối lệnh được thực thi
}
```
### Thành phần
Vòng lặp for gồm 3 thành phần chính, các phần được phân cách nhau bằng dấu chấm phẩy:
- Câu lệnh khỏi tạo thường là khai báo và khởi tạo một biến có nhiệm vụ làm biến đếm cho vòng lặp for (i, j, k).
- Điều kiện lập, chừng nào giá trị của điều kiện lặp còn có giá trị true thì vòng lặp for còn lặp.
- Cập nhật biến đếm, thường phần này sẽ thay đổi giá trị của biến đếm sau khi các câu lệnh ở bên trong vòng lặp for được thực hiện xong.

<div align="center">
<img src="https://github.com/user-attachments/assets/05d1187e-debc-4676-8bc9-b75373336784" alt="Image" width="350"/>
</div>

### Sử dụng for
- Vòng lặp for được sử dụng nhiều nhất và thường được sử dụng khi biết trước số vòng lặp cần thực hiện.
- Biến điều khiển cần được khởi tạo, kiểm tra và cập nhật trong cùng một dòng.
- Vòng lặp for không nhất thiết có đủ cả 3 phần nhưng phải luôn có đủ 2 dấu; để phân cách giữa 3 phần.

<div align="center">
<img src="https://github.com/user-attachments/assets/1dcf55c3-0230-49fd-98bd-be8ec8434c25" alt="Image" width="600"/>
</div>

### break và continue
#### break
Khi muốn dừng vòng lặp for với một điều cho trước ta dùng câu lệnh `break`. Khi gặp câu lệnh `break`, **vòng for sẽ kết thúc ngay lập tức**, thông thường `break` sẽ đi kèm với câu lệnh if để kiểm tra điều kiện dừng.

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // Thoát khỏi vòng lặp khi i bằng 5
        }
        cout << "Giá trị của i: " << i << endl;
    }
    cout << "Vòng lặp kết thúc." << endl;
    return 0;
}
```

#### continue
Khi muốn bỏ qua phần còn lại của vòng lặp hiện tại và chuyển sang vòng lặp mới, ta sử dụng continue.

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  // Bỏ qua khi i bằng 3
        }
        cout << "Giá trị của i: " << i << endl;
    }
    return 0;
}
```