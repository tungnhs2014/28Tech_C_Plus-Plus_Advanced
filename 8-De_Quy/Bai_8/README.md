# [Đề Quy]: Bài 8. Ước chung lớn nhất, bội chung nhỏ nhất

## Mô tả bài toán

Cho 2 số a và b, hãy tìm ước chung lớn nhất và bội chung nhỏ nhất của 2 số a và b. Trong đó hàm UCLN sử dụng đề quy để tính.

## Input Format

2 số nguyên dương a và b.

## Constraints

1≤a,b≤10^12;

## Output Format

In ra UCLN và BCNN của 2 số. Dữ liệu đảm bảo UCLN của 2 số nằm trong khoảng số nguyên 64 bit.

## Sample Input 0

```
10 20
```

## Sample Output 0

```
10 20
```

## Giải thích

UCLN(10, 20) = 10
BCNN(10, 20) = (10 × 20) / UCLN(10, 20) = 200 / 10 = 20

## Thuật toán Euclidean (đệ quy)

```
UCLN(a, b) = {
    a               nếu b = 0
    UCLN(b, a%b)    nếu b ≠ 0
}
```

## Công thức BCNN

BCNN(a, b) = (a × b) / UCLN(a, b)

## Ghi chú

- Sử dụng thuật toán Euclidean đệ quy để tính UCLN
- Trường hợp cơ sở: UCLN(a, 0) = a
- Trường hợp đệ quy: UCLN(a, b) = UCLN(b, a%b)
- BCNN được tính từ UCLN theo công thức toán học