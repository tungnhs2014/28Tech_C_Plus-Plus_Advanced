# [Đề Quy]: Bài 9. Lũy thừa nhi phân

## Mô tả bài toán

Cho 2 số nguyên không âm a và b. Hãy tính a^b%(10^9+7). Kiện thức bạn cần sử dụng là Binary Exponentiation.

## Fast Modular Exponentiation

**(a × b) mod n = ((a mod n) × (b mod n)) mod n**

```
X^Y mod N = {
    (x^[Y/2] mod N)^2 mod N                    if Y is even
    ((x^[Y/2] mod N)^2 mod N) × X mod N        if Y is odd
}
```

We can save the value of (x^[Y/2] mod N) to not compute it twice
O(log(n))

## Input Format

2 số nguyên dương a, b

## Constraints

1≤a,b≤10^9

## Output Format

In ra kết quả của bài toán.

## Sample Input 0

```
2 10
```

## Sample Output 0

```
1024
```

## Giải thích

2^10 = 1024

Vì 1024 < 10^9 + 7 nên kết quả không bị modulo.

## Thuật toán Binary Exponentiation

```
power(a, b, mod) = {
    1                                           nếu b = 0
    power(a, b/2, mod)^2 % mod                  nếu b chẵn
    (power(a, b/2, mod)^2 * a) % mod            nếu b lẻ
}
```

## Ghi chú

- Sử dụng Binary Exponentiation (Lũy thừa nhi phân) để tính a^b mod (10^9+7)
- Độ phức tạp: O(log b)
- Trường hợp cơ sở: a^0 = 1
- Tối ưu bằng cách lưu kết quả trung gian để không tính lại
- MOD = 10^9 + 7 = 1000000007