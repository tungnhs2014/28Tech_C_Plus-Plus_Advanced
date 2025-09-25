# [Đề Quy]: Bài 11. Chuyển hệ thập phân sang hệ nhị phân

## Mô tả bài toán

Cho một số nguyên không âm N, hãy in ra dạng biểu diễn nhị phân của số N.

## Input Format

Số nguyên không âm N

## Constraints

0≤n≤10^18

## Output Format

Biểu diễn nhị phân của số nguyên N.

## Sample Input 0

```
8
```

## Sample Output 0

```
1000
```

## Giải thích

8 trong hệ thập phân = 1000 trong hệ nhị phân

Quá trình chuyển đổi:
- 8 ÷ 2 = 4 dư 0
- 4 ÷ 2 = 2 dư 0  
- 2 ÷ 2 = 1 dư 0
- 1 ÷ 2 = 0 dư 1

Đọc các số dư từ dưới lên: 1000

## Thuật toán đệ quy

```
binary(n) = {
    ""                          nếu n = 0
    binary(n/2) + (n%2)         nếu n > 0
}
```

**Trường hợp đặc biệt:** binary(0) = "0"

## Ghi chú

- Sử dụng đệ quy để chia liên tục cho 2 và lấy phần dư
- Trường hợp cơ sở: n = 0 (dừng đệ quy)
- Trường hợp đệ quy: binary(n/2) + (n%2)
- Cần xử lý trường hợp đặc biệt n = 0 → "0"