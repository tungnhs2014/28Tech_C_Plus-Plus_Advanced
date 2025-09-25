# [Đề Quy]: Bài 10. Tính tổng 5

## Mô tả bài toán

Tính tổng S(n) = 1/1 + 1/2 + 1/3 + ... + 1/n bằng đề quy.

## Input Format

Số nguyên dương n.

## Constraints

1≤n≤1000;

## Output Format

In ra S(n) lấy 3 số sau dấu phẩy.

## Sample Input 0

```
18
```

## Sample Output 0

```
3.495
```

## Giải thích

S(18) = 1/1 + 1/2 + 1/3 + ... + 1/18

Tính từng phần:
- 1/1 = 1.000
- 1/2 = 0.500
- 1/3 = 0.333...
- ...
- 1/18 = 0.055...

Tổng ≈ 3.495 (làm tròn 3 chữ số thập phân)

## Công thức đệ quy

```
S(n) = {
    1.0             nếu n = 1
    1.0/n + S(n-1)  nếu n > 1
}
```

## Ghi chú

- Bài toán về chuỗi điều hòa (Harmonic Series)
- Trường hợp cơ sở: S(1) = 1.0
- Trường hợp đệ quy: S(n) = 1.0/n + S(n-1)
- Kết quả in với độ chính xác 3 chữ số thập phân
- Sử dụng kiểu dữ liệu double/float để tính toán chính xác