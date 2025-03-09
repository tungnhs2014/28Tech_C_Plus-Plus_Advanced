# Bài 7: Số lớn nhất và số nhỏ nhất

## Mô tả bài toán  
Cho 2 số nguyên a và b. Bạn hãy tìm 2 số sau:
1. Số thứ nhất là số lớn nhất <= a mà chia hết cho b.
2. Số thứ hai là số nhỏ nhất >= a mà chia hết cho b.

**Gợi ý:**
- Số thứ 1: `a / b * b`
- Số thứ 2: `(a + b - 1) / b * b`

Hoặc có thể dùng `if-else`, không dùng vòng lặp.

**Lưu ý:**
- Nếu `a` chia hết cho `b` thì số thứ hai là `a`, ngược lại là `(a / b + 1) * b`.
- Các phép chia đều là chia nguyên.

### Input Format
Một dòng chứa 2 số nguyên `a`, `b`.

### Constraints
`1 <= a, b <= 10^6`

### Input Format
Số nguyên dương N

### Constraints
- `1 <= a, b <= 10^6`

### Output Format
- Dòng đầu tiên in ra số thứ 1 cần tìm.
- Dòng thứ hai in ra số thứ 2 cần tìm.

### Sample Input 0
```
717 689
```

### Sample Output 0
```
689
1378
```



