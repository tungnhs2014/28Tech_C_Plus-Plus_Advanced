# [Đề Quy]: Bài 13. Tính tổng chữ số sử dụng đệ quy

## Mô tả bài toán

Cho một số nguyên không âm N, hãy tính tổng chữ số của N sử dụng kỹ thuật đệ quy.

## Input Format

Số nguyên không âm N

## Constraints

0≤n≤10^18

## Output Format

Tổng các chữ số của N

## Sample Input 0

```
123456789
```

## Sample Output 0

```
45
```

## Giải thích

Số 123456789 có các chữ số: 1, 2, 3, 4, 5, 6, 7, 8, 9

Tổng = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 = 45

## Thuật toán đệ quy

```
sumDigits(n) = {
    0                           nếu n = 0
    (n % 10) + sumDigits(n/10)  nếu n > 0
}
```

## Cách thức hoạt động

- Lấy chữ số cuối: n % 10
- Loại bỏ chữ số cuối: n / 10
- Đệ quy với số còn lại
- Cộng tất cả các chữ số lại

## Ví dụ chi tiết

sumDigits(123):
- 123 % 10 = 3, sumDigits(12)
- 12 % 10 = 2, sumDigits(1)  
- 1 % 10 = 1, sumDigits(0)
- sumDigits(0) = 0
- Kết quả: 3 + 2 + 1 + 0 = 6

## Ghi chú

- Trường hợp cơ sở: n = 0 → tổng = 0
- Trường hợp đệ quy: tổng = (chữ số cuối) + sumDigits(số còn lại)
- Sử dụng phép chia và phép chia lấy dư để tách chữ số