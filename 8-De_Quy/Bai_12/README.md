# [Đề Quy]: Bài 12. Chuyển hệ thập phân sang hệ 16

## Mô tả bài toán

Cho một số nguyên không âm N, hãy in ra dạng biểu diễn của N dưới hệ 16.

## Input Format

Số nguyên không âm N

## Constraints

0≤n≤10^18

## Output Format

Biểu diễn hệ 16 của số nguyên N.

## Sample Input 0

```
995
```

## Sample Output 0

```
3E3
```

## Giải thích

995 trong hệ thập phân = 3E3 trong hệ 16

Quá trình chuyển đổi:
- 995 ÷ 16 = 62 dư 3
- 62 ÷ 16 = 3 dư 14 (E)
- 3 ÷ 16 = 0 dư 3

Đọc các số dư từ dưới lên: 3E3

## Bảng chuyển đổi hệ 16

- 0-9: giữ nguyên
- 10 → A, 11 → B, 12 → C, 13 → D, 14 → E, 15 → F

## Thuật toán đệ quy

```
hex(n) = {
    ""                              nếu n = 0
    hex(n/16) + toHexChar(n%16)     nếu n > 0
}

toHexChar(r) = {
    '0'-'9'     nếu 0 ≤ r ≤ 9
    'A'-'F'     nếu 10 ≤ r ≤ 15
}
```

**Trường hợp đặc biệt:** hex(0) = "0"

## Ghi chú

- Sử dụng đệ quy để chia liên tục cho 16 và lấy phần dư
- Chuyển đổi phần dư 10-15 thành A-F
- Trường hợp cơ sở: n = 0 (dừng đệ quy)
- Cần xử lý trường hợp đặc biệt n = 0 → "0"