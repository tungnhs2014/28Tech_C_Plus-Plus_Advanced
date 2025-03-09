# Phần 2: Cấu trúc rẻ nhánh IF..ELSE, SWITCH CASE

## 1. CÂU LỆNH IF
Câu lệnh `if` được sử dụng khi muốn chương trình thực hiện một hoặc một nhóm câu lệnh nếu một điều kiện nào đó được thỏa mãn. Nếu điều kiện không đúng, khối lệnh bên trong `if` sẽ bị bỏ qua.

### Cú pháp
```cpp
if (condition) {
    // Các câu lệnh sẽ được thực thi nếu điều kiện đúng
}
```

### Ví dụ

![Image](https://github.com/user-attachments/assets/de8b6646-40e2-4ae3-ac86-22a1cedbac91)

### Chú ý:
- Nhớ phân biệt các câu lệnh bên trong `if` với chính `if`. Trong trường hợp bên trong `if` chỉ có một câu lệnh, có thể bỏ dấu `{}`.
- Nếu có nhiều câu lệnh bên trong `if`, bắt buộc phải dùng dấu `{}` để bao quanh khối lệnh đó.

---

## 2. CÂU LỆNH IF ELSE
Câu lệnh `if else` được sử dụng khi bạn muốn chương trình thực hiện một khối lệnh nếu điều kiện đúng, và một khối lệnh khác nếu điều kiện sai.

### Cú pháp
```cpp
if (condition) {
    // Các câu lệnh sẽ được thực thi nếu điều kiện đúng
} else {
    // Các câu lệnh sẽ được thực thi nếu điều kiện sai
}
```

### Ví dụ
Giả sử kiểm tra chãn lẻ của một số

```cpp
int number = 100;
if (number % 2 == 0) {
    cout << "Chẵn" << endl;
} else {
    cout << "Lẻ" << endl;
}
```
Nếu `number` chia cho 2 dư 0, tức là điều kiện if đúng, chương trình in ra "Chẵn", ngược lại sai sẽ sẽ in "Lẻ".

---

## 3. CÂU LỆNH IF VÀ ELSE IF
Câu lệnh `if else if` được sử dụng khi bạn muốn kiểm tra nhiều điều kiện khác nhau một cách tuần tự. Nếu điều kiện đầu tiên không đúng, chương trình sẽ kiểm tra điều kiện tiếp theo, và tiếp tục cho đến khi tìm thấy điều kiện đúng hoặc thực hiện khối lệnh `else` nếu không có điều kiện nào đúng.

### Cú pháp
```cpp
if (condition1) {
    // Khối lệnh thực thi nếu condition1 đúng
} else if (condition2) {
    // Khối lệnh thực thi nếu condition2 đúng
} else if (conditionN) {
    // Khối lệnh thực thi nếu conditionN đúng
} else {
    // Khối lệnh thực thi nếu không có điều kiện nào đúng
}
```

### Ví dụ
Giả sử chúng ta kiểm tra một số và phân loại nó thành dương, âm hoặc bằng 0.

```cpp
int number = -5;
if (number > 0) {
    cout << "Số dương" << endl;
} else if (number < 0) {
    cout << "Số âm" << endl;
} else {
    cout << "Số 0" << endl;
}
```
Nếu `number` lớn hơn 0, chương trình in ra "Số dương". Nếu nhỏ hơn 0, chương trình in "Số âm". Nếu bằng 0, chương trình in "Số 0".

### Good vs Bad Practice
#### Good:
```cpp
int day; 
cin >> day;
if(day == 1) cout << "Chủ nhật" << endl;
else if(day == 2) cout << "Thứ hai" << endl;
else if(day == 3) cout << "Thứ ba" << endl;
else if(day == 4) cout << "Thứ tư" << endl;
else if(day == 5) cout << "Thứ năm" << endl;
else if(day == 6) cout << "Thứ sáu" << endl;
else if(day == 7) cout << "Thứ bảy" << endl;
```
#### Bad:
```cpp
int day; 
cin >> day;
if(day == 1) cout << "Chủ nhật" << endl;
if(day == 2) cout << "Thứ hai" << endl;
if(day == 3) cout << "Thứ ba" << endl;
if(day == 4) cout << "Thứ tư" << endl;
if(day == 5) cout << "Thứ năm" << endl;
if(day == 6) cout << "Thứ sáu" << endl;
if(day == 7) cout << "Thứ bảy" << endl;
```
Trong cách viết "Good", khi một điều kiện đúng, chương trình sẽ không kiểm tra các điều kiện tiếp theo, giúp tối ưu hóa hiệu suất. Trong cách viết "Bad", dù một điều kiện đã đúng, các điều kiện sau vẫn tiếp tục được kiểm tra, gây lãng phí tài nguyên.

### Chú ý
- Khi một điều kiện trong chuỗi `if else if` đúng, chương trình sẽ không kiểm tra các điều kiện tiếp theo.
- Nếu có nhiều điều kiện cần kiểm tra, sử dụng `else if` giúp tối ưu hóa hiệu suất so với việc dùng nhiều câu lệnh `if` riêng lẻ.
- Trong trường hợp có nhiều điều kiện giá trị rời rạc, `switch case` có thể là lựa chọn thay thế hiệu quả hơn `if else if`.

---

## 4. CÂU LỆNH SWITCH CASE

Câu lệnh `switch case` giúp kiểm tra nhiều điều kiện khác nhau dựa trên một giá trị cụ thể.

### Cú pháp
```cpp
switch (val) {
    case 1:
        // code
        break;
    case 2:
        // code
        break;
    ...
    case n:
        // code
        break;
    default:
        // code
}
```

### Ý nghĩa
Giá trị của `val` sẽ được so sánh lần lượt với các giá trị trong từng `case`. Nếu `val` trùng với giá trị của một `case`, khối lệnh trong `case` đó sẽ được thực thi. Nếu không có `case` nào khớp, khối lệnh trong `default` sẽ được thực thi.

Ví dụ:
```cpp
int day = 3;
switch (day) {
    case 1:
        cout << "Chủ nhật" << endl;
        break;
    case 2:
        cout << "Thứ hai" << endl;
        break;
    case 3:
        cout << "Thứ ba" << endl;
        break;
    default:
        cout << "Giá trị không hợp lệ" << endl;
}
```
Nếu `day = 3`, chương trình sẽ in ra "Thứ ba".

### Chú ý
- `val` có thể là số nguyên, ký tự, hoặc chuỗi ký tự (trong C++ hiện đại).
- Nếu không có `break`, chương trình sẽ tiếp tục thực thi các `case` tiếp theo cho đến khi gặp `break` hoặc kết thúc `switch`.
- `default` không bắt buộc nhưng nên có để xử lý trường hợp `val` không khớp với bất kỳ `case` nào.

# BẢNG MÃ ASCII

Bảng mã ASCII có 256 ký tự, mỗi ký tự được gán với một mã số duy nhất gọi là mã ASCII.

### Ý nghĩa
- ASCII là bảng mã chuẩn dùng để biểu diễn ký tự trong máy tính.
- Mỗi ký tự trong bảng mã ASCII đều có một giá trị số nguyên tương ứng.
- Kiểu dữ liệu `char` trong C/C++ có thể được xem như số hoặc ký tự, do đó có thể sử dụng các phép toán số học trên ký tự.

### Chú ý
- Khi thực hiện các phép toán trên ký tự, giá trị ASCII của ký tự sẽ được sử dụng.
- Các ký tự được sắp xếp theo thứ tự tăng dần trong bảng mã ASCII.

### Một số dãy ký tự quan trọng
| Dãy ký tự | Dãy mã ASCII |
|-----------|-------------|
| A-Z       | 65-90       |
| a-z       | 97-122      |
| 0-9       | 48-57       |

![Bang Ma ASCII](https://github.com/user-attachments/assets/96c47797-b29c-44a2-888e-2343a6f898d8)

### Một vài câu lệnh kiểm tra kiểu ký tự cần nắm vững
| Câu lệnh | Ý nghĩa |
|----------|---------|
| `if ((c >= 'a') && (c <= 'z'))` | Kiểm tra ký tự in thường |
| `if ((c >= 97) && (c <= 122))` | Kiểm tra ký tự in thường |
| `if ((c >= 'A') && (c <= 'Z'))` | Kiểm tra ký tự in hoa |
| `if ((c >= 65) && (c <= 90))` | Kiểm tra ký tự in hoa |
| `if ((c >= '0') && (c <= '9'))` | Kiểm tra ký tự là chữ số |
| `if ((c >= 48) && (c <= 57))` | Kiểm tra ký tự là chữ số |
| `char c = 'A'; c += 32;` | Chuyển ký tự c thành dạng in thường tương ứng |
| `char c = 'a'; c -= 32;` | Chuyển ký tự c thành dạng in hoa tương ứng |
