# Bài 20: Lát đá quảng đường 

## Mô tả bài toán  
Quảng đường Nhà hát ở thủ đô Berland có hình chữ nhật với kích thước n x m mét. Nhân dịp kỷ niệm thành phố, một quyết định đã được đưa ra để lát Quảng trường bằng những viên bằng đá granit vuông. Mỗi viên đá hình vuông có kích thước a x a.

Số lượng viên đá ít nhất cần thiết để lát Quảng trường là bao nhiêu? Nó được phép che phủ bề mặt lớn hơn Quảng trường Nhà hát. Nó không được phép phá vỡ các viên đá. Các cạnh của viên đá phải song song với cạnh của Quảng Trường.
 
**Gợi ý:** Tính xem cần bao nhiêu viên đá để phủ kín chiều rộng, chiều dài của HCN rồi đem nhân với nhau sẽ ra số viên đá cần, chú ý trường hợp n và m chia hết cho a hoặc không chia hết.

### Input Format
3 số nguyên dương `n`, `m`, `a`

### Constraints
`1 <= n, m, a <= 10^9`

### Output Format
Viết số lượng viên đá cần thiết đẻ lát kín quảng trường.

### Sample Input 0
```
6 6 4
```
### Sample Output 0
```
4
```
