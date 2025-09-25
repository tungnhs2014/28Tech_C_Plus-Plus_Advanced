# [Đề Quy]: Bài 7. Tính tổ hợp chập K của N

## Mô tả bài toán

Cho 2 số nguyên dương N và K. Hãy tính tổ hợp chập K của N. Tiện thể các bạn ôn lại một vài tính chất của tổ hợp chập K của N nhé.

Số các tổ hợp chập k của n phải thoả:

**C(n,k) = n! / [k! * (n-k)!]**

**Quy ước:**
- C(n,0) = 1

**Tính chất:**
- C(n,0) = C(n,n) = 1
- C(n,k) = C(n,n-k)  
- C(n,k) = C(n-1,k-1) + C(n-1,k)
- C(n,k) = [(n-k+1) / k] * C(n,k-1)

## Input Format

2 số nguyên dương N và K.

## Constraints

0≤k≤n≤10.

## Output Format

Kết quả của tổ hợp chập K của N.

## Sample Input 0

```
10 2
```

## Sample Output 0

```
45
```

## Giải thích

C(10,2) = 10! / (2! × 8!) = (10 × 9) / (2 × 1) = 90 / 2 = 45

## Công thức đệ quy

```
C(n,k) = {
    1                           nếu k = 0 hoặc k = n
    C(n-1,k-1) + C(n-1,k)      nếu 0 < k < n
}
```

## Ghi chú

- Sử dụng tính chất Pascal: C(n,k) = C(n-1,k-1) + C(n-1,k)
- Trường hợp cơ sở: C(n,0) = C(n,n) = 1
- Đệ quy dựa trên tam giác Pascal
- Có thể tối ưu bằng memoization để tránh tính lại