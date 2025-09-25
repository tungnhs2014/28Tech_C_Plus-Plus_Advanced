# [Đề Quy]: Bài 5. Tính giai thừa

## Mô tả bài toán

Tính n giai thừa bằng đề quy.

## Input Format

Số nguyên dương N.

## Constraints

0≤n≤10;

## Output Format

Kết quả của N!

## Sample Input 0

```
6
```

## Sample Output 0

```
720
```

## Giải thích

6! = 6 × 5 × 4 × 3 × 2 × 1 = 720

## Công thức đệ quy

```
factorial(n) = {
    1                    nếu n = 0 hoặc n = 1
    n × factorial(n-1)   nếu n > 1
}
```

## Ghi chú

- Bài toán cơ bản về tính giai thừa bằng đệ quy
- Trường hợp cơ sở: 0! = 1, 1! = 1
- Trường hợp đệ quy: n! = n × (n-1)!
- Constraint nhỏ (n ≤ 10) nên không lo tràn số