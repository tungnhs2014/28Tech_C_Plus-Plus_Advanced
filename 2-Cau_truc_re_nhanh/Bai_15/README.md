# Bài 15: Mua nước

## Mô tả bài toán  
28tech muốn nấu một món súp. Để làm điều đó, anh ta cần mua chính xác n lít nước. Chỉ có 2 loại chai nước trong cửa hàng gần đó chai 1 lít và chai 2 lít. Có vô số chai của hai loại này trong cửa hàng. Chai loại thứ 1 có giá là a burles và chai loại thứ 2 có giá tương ứng b burles. 28tech muốn chi càng ít tiền càng tốt. Nhiệm vụ của bạn là tìm ra số tiền tối thiểu (bằng burles) 28tech cần mua chính xác n lít nước ở cửa hàng cần đó nếu loại chai thứ nhất có giá là a burles và chai loại thứ 2 có giá là b burles.

**Gợi ý:** Kiểm tra xem chai nào rẻ hơn (giá tiền 1Lit) thì sẽ ưu tiên mua chai đó, nếu chai 1l rẻ hơn thì mua toàn bộ chai 1l, còn chai 2lit rẻ hơn thì chia làm 2 trường hợp. N chắn thì mua n / 2 chai 2l, n lẻ thì phải mua thêm 1 chai 1l vì không được mua thừa.  

### Input Format
3 số nguyên `n, a, b`

### Constraints
`1 <= n <= 10^12; 1 <= a, b <= 1000`

### Output Format
Số tiền ít nhất để mua n lít nước. Chú ý bạn phải mua chính xác n lít nước, không mua thiếu cũng không mua thừa.

### Sample Input 0
```
10 1 3
```
### Sample Output 0
```
10
```