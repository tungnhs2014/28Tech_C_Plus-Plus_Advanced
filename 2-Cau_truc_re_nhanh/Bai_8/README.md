# Bài 8: Tổng, hiệu, tích, thương

## Mô tả bài toán  
Nhập vào 2 số nguyên `a`, `b`, in ra tổng, hiệu, tích, thương (lấy độ chính xác với 4 chữ số) của 2 số đó.

**Lưu ý:**
- Bài này có thể bị sai do 2 nguyên nhân:
  1. Khi tính tích bị tràn số.
  2. Độ chính xác của thương.
- Nếu không thể tìm được thương của 2 số (chia cho 0) thì in ra "INVALID".

### Input Format
Một dòng chứa 2 số nguyên `a`, `b`.

### Constraints
`-10^8 <= a, b <= 10^8`

### Output Format
In ra tổng, hiệu, tích, thương trên từng dòng.
- Nếu không thể tìm được thương của 2 số thì dòng kết quả của thương in ra "INVALID".

### Sample Input 0
```
7769 0
```

### Sample Output 0
```
7769
7769
0
INVALID
```

### Sample Input 1
```
9794 1282
```

### Sample Output 1
```
11076
8512
12555908
7.6396
```
