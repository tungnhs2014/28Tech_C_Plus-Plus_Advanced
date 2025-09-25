# [Đề Quy]: Bài 2. Tính tổng 2

## Mô tả bài toán

Tính tổng hàm S(n) = 1^2 + 2^2 + 3^2 + 4^2 + ... + n^2 bằng đề quy. Nếu bạn chưa biết thì S(n) có thể tính nhanh bằng công thức S(n) = n * (n + 1) * (2n + 1) / 6

## Input Format

Số nguyên dương n.

## Constraints

0≤n≤1000; Chú ý các bạn phải code bằng đề quy nhé.

## Output Format

In ra kết quả của S(n)

## Sample Input 0

```
53
```

## Sample Output 0

```
51039
```

## Giải thích

S(53) = 1^2 + 2^2 + 3^2 + ... + 53^2 = 53 * 54 * 107 / 6 = 51039

Tính chi tiết:
- n = 53
- S(n) = n * (n + 1) * (2n + 1) / 6
- S(53) = 53 * 54 * (2*53 + 1) / 6 = 53 * 54 * 107 / 6 = 51039

## Công thức đệ quy

```
S(n) = {
    0             nếu n = 0
    n^2 + S(n-1)  nếu n > 0
}
```

## Ghi chú

- Bài toán yêu cầu sử dụng đệ quy để tính tổng bình phương
- Trường hợp cơ sở: S(0) = 0
- Trường hợp đệ quy: S(n) = n^2 + S(n-1)
- Có thể kiểm tra kết quả bằng công thức toán học: S(n) = n*(n+1)*(2n+1)/6