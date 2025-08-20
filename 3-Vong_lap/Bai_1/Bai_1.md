# Bài 1: Tổng tự nhiên liên tiếp

## Mô tả bài toán
Tính tổng S(n) = 1 + 2 + 3 + ... + n. Công thức tổng quát của dãy: n * (n + 1) / 2.
 
**Gợi ý:** Tạo 1 biến kết quả gọi là tổng và khởi tạo bằng 0 (tránh giá trị rác), sau đó sinh ra 1 vòng lặp chạy từ 1 tới n, mỗi vòng lặp thì cộng biến i của vòng lặp vào biến tổng. In ra biến tổng SAU KHI VÒNG LẶP KẾT THÚC.

### Input Format
- Số nguyên dương `N` 

### Constraints
- `1 <= N <= 10^6`

### Output Format
Kết quả của S(n)

### Sample Input 0
```
6
```
### Sample Output 0
```
21
```