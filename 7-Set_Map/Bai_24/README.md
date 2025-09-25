# [Set Map]: Bài 24. Map và string

## Mô tả bài toán

Cho danh sách các cầu thủ ghi bàn, bạn hãy thống kê xem mỗi người ghi bao nhiều bàn và liệt kê danh sách các cầu thủ cùng số lượng bàn thắng theo thứ tự từ điển tăng dần. Ngoài ra bạn cần tìm người ghi bàn nhiều nhất và ghi bàn ít nhất, nếu có nhiều người có cùng số bàn thắng nhiều nhất và ít nhất bạn cần lấy người có tên theo thứ tự từ điển nhỏ hơn.

## Input Format

- Dòng 1 là N: số lượng cầu thủ
- N dòng tiếp theo là tên cầu thủ ghi bàn

## Constraints

- 1<=N<=10000

## Output Format

Đầu tiên liệt kê danh sách cầu thủ cùng số lượng bàn thắng, sau đó cách ra 1 dòng và tiếp tục liệt kê người ghi ít bàn thắng nhất và người ghi nhiều bàn thắng nhất.

## Sample Input 0

```
16
Messi
Ronaldo
Neymar
Messi
Rooney
Ronaldo
Messi
Ronaldo
Neymar
Neymar
Ronaldo
Messi
Ronaldo
Messi
Messi
Rooney
```

## Sample Output 0

```
Messi 6
Neymar 3
Ronaldo 5
Rooney 2

Rooney 2
Messi 6
```

## Giải thích

**Danh sách cầu thủ ghi bàn:**
- Messi: 6 bàn
- Neymar: 3 bàn  
- Ronaldo: 5 bàn
- Rooney: 2 bàn

**Kết quả:**
1. **Liệt kê theo thứ tự từ điển tăng dần:**
- Messi 6
- Neymar 3
- Ronaldo 5
- Rooney 2

1. **Dòng trống**

2. **Người ghi ít bàn nhất:** Rooney (2 bàn)
3. **Người ghi nhiều bàn nhất:** Messi (6 bàn)

## Ghi chú

- Sử dụng Map<string, int> để đếm số bàn thắng của mỗi cầu thủ
- Map tự động sắp xếp theo thứ tự từ điển của key (tên cầu thủ)
- Tìm min/max trong Map để xác định người ghi ít nhất và nhiều nhất
- Nếu có nhiều người cùng số bàn min/max, chọn theo thứ tự từ điển nhỏ nhất