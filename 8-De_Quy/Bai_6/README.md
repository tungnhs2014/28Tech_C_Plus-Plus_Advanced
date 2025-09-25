# [Đề Quy]: Bài 6. Số fibonacci

## Mô tả bài toán

Dãy số fibonacci là dãy số thỏa mãn: F1=0, F2=1, Fn=Fn-1+Fn-2. Hãy tìm số Fibonacci thứ n sử dụng đề quy.

Độ phức tạp của code đề quy là O(1.618^n) không thể áp dụng được với n lớn.

## Input Format

Số nguyên dương n.

## Constraints

1≤n≤15;

## Output Format

In ra số Fibonacci thứ n.

## Sample Input 0

```
1
```

## Sample Output 0

```
0
```

## Giải thích

Dãy Fibonacci: F1=0, F2=1, F3=1, F4=2, F5=3, F6=5, F7=8, F8=13...

F1 = 0

## Công thức đệ quy

```
fibonacci(n) = {
    0                              nếu n = 1
    1                              nếu n = 2  
    fibonacci(n-1) + fibonacci(n-2) nếu n > 2
}
```

## Ghi chú

- Bài toán cơ bản về dãy Fibonacci sử dụng đệ quy
- Trường hợp cơ sở: F1 = 0, F2 = 1
- Trường hợp đệ quy: Fn = F(n-1) + F(n-2)
- Độ phức tạp O(1.618^n) rất chậm với n lớn
- Constraint nhỏ (n ≤ 15) để tránh timeout