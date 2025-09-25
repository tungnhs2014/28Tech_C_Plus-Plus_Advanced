# [Đề Quy]: Bài 4. Tính tổng 4

## Mô tả bài toán

Tính tổng hàm S(n) = 1 + 2 - 3 + 4 - 5 + 6 + ... + (-1)^(n+1) * n bằng đề quy. Nếu bạn chưa biết thì S(n) có thể tính nhanh bằng công thức: Nếu n chẵn thì S(n) = n / 2, còn nếu n lẻ thì S(n) = (n - 1) / 2 - n

## Input Format

Số nguyên dương n.

## Constraints

1≤n≤10^3; Chú ý các bạn phải code bằng đề quy nhé.

## Output Format

In ra kết quả của S(n)

## Sample Input 0

```
919
```

## Sample Output 0

```
-460
```

## Giải thích

S(919) = 1 + 2 - 3 + 4 - 5 + 6 - 7 + 8 - ... - 919

Vì n = 919 là số lẻ, áp dụng công thức: S(919) = (919 - 1) / 2 - 919 = 918 / 2 - 919 = 459 - 919 = -460

## Quy luật dấu

- Số lẻ: dấu +
- Số chẵn: dấu +  
- Số lẻ: dấu -
- Số chẵn: dấu -
- ...

Tức là: + + - + - + - + - ...

## Công thức đệ quy

```
S(n) = {
    1                           nếu n = 1
    S(n-1) + (-1)^(n+1) * n     nếu n > 1
}
```

## Ghi chú

- Bài toán về dãy số với dấu xen kẽ
- Công thức nhanh: n chẵn → S(n) = n/2; n lẻ → S(n) = (n-1)/2 - n
- Trường hợp cơ sở: S(1) = 1
- Trường hợp đệ quy: S(n) = S(n-1) + (-1)^(n+1) * n