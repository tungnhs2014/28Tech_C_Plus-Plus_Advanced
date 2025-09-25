# [Đề Quy]: Bài 1. Tính tổng 1

## Mô tả bài toán

Tính tổng hàm S(n) = 1 + 2 + 3 + 4 + ... + n bằng đề quy. Nếu bạn chưa biết thì S(n) có thể tính nhanh bằng công thức S(n) = n * (n + 1) / 2

## Input Format

Số nguyên dương n.

## Constraints

0≤n≤1000; Chú ý các bạn phải code bằng đề quy nhé.

## Output Format

In ra S(n).

## Sample Input 0

```
773
```

## Sample Output 0

```
299151
```

## Giải thích

S(773) = 1 + 2 + 3 + ... + 773 = 773 * (773 + 1) / 2 = 773 * 774 / 2 = 299151

## Công thức đệ quy

```
S(n) = {
    0           nếu n = 0
    n + S(n-1)  nếu n > 0
}
```

## Ghi chú

- Bài toán yêu cầu sử dụng đệ quy để tính tổng
- Trường hợp cơ sở: S(0) = 0
- Trường hợp đệ quy: S(n) = n + S(n-1)
- Có thể kiểm tra kết quả bằng công thức toán học: S(n) = n*(n+1)/2