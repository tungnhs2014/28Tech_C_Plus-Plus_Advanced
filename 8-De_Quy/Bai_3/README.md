# [Đề Quy]: Bài 3. Tính tổng 3

## Mô tả bài toán

Tính tổng hàm S(n) = 1^3 + 2^3 + 3^3 + 4^3 + ... + n^3 bằng đề quy. Nếu bạn chưa biết thì S(n) có thể tính nhanh bằng công thức S(n) = [(n * (n + 1) / 2)]^2

## Input Format

Số nguyên dương n.

## Constraints

0≤n≤10^3; Chú ý các bạn phải code bằng đề quy nhé.

## Output Format

In ra kết quả của S(n)

## Sample Input 0

```
435
```

## Sample Output 0

```
899278900
```

## Giải thích

S(435) = 1³ + 2³ + 3³ + ... + 435³

Theo công thức: S(n) = [n*(n+1)/2]²
S(435) = [435 * 436 / 2]² = [94830]² = 899278900

## Công thức đệ quy

```
S(n) = {
    0             nếu n = 0
    n³ + S(n-1)   nếu n > 0
}
```

## Ghi chú

- Bài toán yêu cầu sử dụng đệ quy để tính tổng lập phương
- Trường hợp cơ sở: S(0) = 0
- Trường hợp đệ quy: S(n) = n³ + S(n-1)
- Công thức kiểm tra: S(n) = [n*(n+1)/2]²