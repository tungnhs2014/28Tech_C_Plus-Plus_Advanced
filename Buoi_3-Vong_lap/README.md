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
Vòng lặp `for` gồm 3 thành phần chính, các phần được phân cách nhau bằng dấu chấm phẩy:
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

### Ví dụ for
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "Number: " << i << endl;
    }
    return 0;
}s
```

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

---

## 2. Vòng lặp while
Vòng lặp `while` được sử dụng để lặp đi lặp lại một khối lệnh khi điều kiện được kiểm tra là `true`. Vòng lặp sẽ dừng lại khi điều kiện trở thành `false`.

### Cú pháp
```cpp
while (điều kiện) {
    // Khối lệnh được thực thi nếu điều kiện là true
}
```

### Nguyên lí hoạt động
- Kiểm tra điều kiện trong vòng lặp.
- Nếu điều kiện `true`, thực thi khối lệnh bên trong.
- Nếu điều kiện `false`, thoát khỏi vòng lặp.
- Sau khi thực thi khối lệnh, quay lại bước 1 để kiểm tra lại điều kiện.

<div align="center">
<img src="https://github.com/user-attachments/assets/45aa0b92-76c5-40fd-85c3-07756739feb4" alt="Image" width="400"/>
</div>

### Khi nào sử dụng while
- Khi điều kiện lặp còn đúng thì vòng lặp `while` còn tiếp tục hoạt động và các câu lệnh bên trong vòng while sẽ tiếp tục được thực hiện.
- Vòng lặp `while` được sử dụng khi chưa xác định được số vòng lặp cần thực hiện.
- Thích hợp cho các bài toán yêu cầu kiểm tra liên tục cho đến khi đạt điều kiện dừng.
- Lỗi thường gặp khi dùng `while` là **vòng lặp vĩnh viễn**

<div align="center">
<img src="https://github.com/user-attachments/assets/efcb2034-08a1-491e-89f1-ea443aeb01c5" alt="Image" width="500"/>
</div>

### Ví dụ while
```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        cout << "Số: " << i << endl;
        i++;  // Tăng biến đếm
    }
    return 0;
}
```
---

## 3. Vòng lặp do-while
Vòng lặp `do-while` được sử dụng để lặp lại một khối lệnh **ít nhất một lần**, ngay cả khi điều kiện kiểm tra là `false` ngay từ đầu. Sau khi thực hiện khối lệnh, nó sẽ kiểm tra điều kiện để quyết định có tiếp tục hay không.

### Cú pháp
```cpp
do {
    // Khối lệnh được thực thi ít nhất một lần
} while (điều kiện);
```

### Nguyên lí hoạt động
- Thực thi khối lệnh ít nhất một lần.
- Kiểm tra điều kiện trong vòng lặp.
- Nếu điều kiện `true`, tiếp tục lặp lại từ bước 1.
- Nếu điều kiện `false`, thoát khỏi vòng lặp.

<div align="center">
<img src="https://github.com/user-attachments/assets/e1d0103a-eb49-495d-a55c-dd9b03457bbb" alt="Image" width="400"/>
</div>

### Khi nào sử dụng do-while
- Khi muốn thực thi khối lệnh ít nhất một lần trước khi kiểm tra điều kiện.
- Khi chưa xác định được số vòng lặp cần thực hiện.
- Lỗi thường gặp khi dùng `do-while` là **thiếu dấu ; đằng sau while**

<div align="center">
<img src="https://github.com/user-attachments/assets/a0fe7d45-ce2b-49c8-8a2b-45d61d8de1ad"  alt="Image" width="600"/>
</div> 

### Ví dụ do-while
```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << "Vòng lặp vô hạn!" << endl;
    } while (i == 1);

    return 0;
}
```
---