# Bài 4: Tổng nghịch đảo

## Mô tả bài toán
Tính tổng: S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n

**Gợi ý:** Tạo một biến kết quả gọi là tổng và khởi tạo bằng 0 (tránh giá trị rác), sau đó sinh ra 1 vòng lặp duy nhất chạy từ 1 tới n, vòng lặp thì cộng giá trị 1 / i của vòng lặp vào biến tổng. In ra biến tổng SAU KHI VÒNG LẶP KẾT THÚC. 

### Input Format
- Số nguyên dương `n` 

### Constraints
- `1 <= N <= 10^5`

### Output Format
In ra kết quả lấy độ chính xác 3 số sau dấu phẩy.

### Sample Input 0
```
2
```
### Sample Output 0
```
1.500
```