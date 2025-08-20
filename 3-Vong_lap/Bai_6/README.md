# Bài 6: Tổng ước

## Mô tả bài toán
Tính tổng ước của số nguyên dương n. Bài này duyệt từ 1 tới n sẽ bịn quá thời gian cho phép.

**Gợi ý:** Duyệt các số i từ 1 tới căn n, nếu i là ước sẽ tính luôn được ước còn lại của n là n / i. Ví dụ n = 60 có các ước 1, 2, 3, 4, 5, 6, 10, 12, 15, 20, 30, 60. Duyệt các ước từ 1 tới 7 (căn 60) và khi thấy ước là 1 => 60, 2 => 30, 3 => 20, 4 => 15, 5 => 12, 6 => 10. Chú ý trường hợp n là số chính phương sẽ xảy ra cặp i và n / i giống nhau, khi đó chỉ được tính 1 lần. 

### Input Format
- Số nguyên dương `N` 

### Constraints
- `1 <= N <= 10^10`

### Output Format
Tổng ước của N

### Sample Input 0
```
28
```
### Sample Output 0
```
56
```