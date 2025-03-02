## Bài 13. Lớn nhất, nhỏ nhất

### Mô tả bài toán
- Cho 4 số nguyên x, y, z, t. Như bạn đã biết, để tìm số lớn nhất và nhỏ nhất trong 2 số ta có thể sử dụng hàm max, min của thư viện math. 
- Ngoài ra để tìm max, min của nhiều số bạn có thể sử dụng hàm max, min của thư viện , ví dụ để tìm max của a, b, c có thể dùng max({a, b, c}), chú ý đặt các biến vào trong ngoặc nhọn nếu muốn tìm max, min của 3 số trở lên. 
- Bài toán yêu cầu bạn tìm những số sau :
  + Dòng 1 in ra số lớn hơn trong 2 số x, y.
  + Dòng 2 in ra số nhỏ hơn trong 2 số z, t.
  + Dòng 3 in ra số lớn nhất trong 3 số x, y, z.
  + Dòng 4 in ra số nhỏ nhất trong 4 số x, y, z, t.
- Ví dụ : Tìm max, min của 3 số:
    ####
        #include <algorithm>
        int a = 20, b = 30, c = 40;
        cout << max({a, b, c}) << endl;
        cout << min({a, b, c}) << endl;

- **Lưu ý:** Bạn cần chạy với chuẩn C++11 trở lên để có thể gọi hàm max, min có 3 số trở lên. Nếu sử dụng devC++ thì bạn vào tool => compiler option => setting => code generation => language standard => GNU C++11


### Đầu vào
- 4 số x, y, z, t lần lượt trên 4 dòng.

### Ràng buộc
- 1<=x, y, z, t<= 1000

### Đầu ra
- In ra 4 dòng theo yêu cầu.

### Ví dụ
#### Input 01
    586
    617
    778
    37

#### Output 01
    617
    37
    778
    37
