# Bài 25: Đổi tiền

## Mô tả bài toán  
28tech có rất nhiều tiền :v. Anh ta có n đô la trong ngân hàng. Vì lý do bảo mật, anh ta muốn rút tiền mặt (chúng tôi sẽ không tiết lộ lý do tại đây). Các mệnh giá cho tờ đô la là 1, 5, 10, 20, 100. Số tờ tiền tối thiểu mà 28tech có thể nhận được sau khi rút toàn bộ số dư của mình là bao nhiêu?

**Gợi ý:** Xét đồng mệnh giá cao nhất tới mệnh giá thấp nhất, ở mỗi tờ tiền thì số tiền sẽ bằng lượng tiền có chia nguyên cho mệnh giá, ví dụ có 567 đô mà xét tờ 100 thì đổi được 5 tờ và dư 67 đô tiếp tục xét với mệnh giá nhỏ hơn

### Input Format
Số nguyên dương `n`

### Constraints
`1<=n<=10^9`

### Output Format
In ra số tờ tiền tối thiểu để rút được n đô la.

### Sample Input 0
```
3455
```
### Sample Output 0
```
38
```
