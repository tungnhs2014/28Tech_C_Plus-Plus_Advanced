# Bài 24: Đường đi ngắn nhất

## Mô tả bài toán  
Hôm nay Patrick chờ đợi một chuyến thăm từ người bạn SpPal của mình. Để chuẩn bị cho chuyến thăm, 
Patrick cần mua một số quà tặng ở hai cửa hàng gần nhà. Có một con đường dài d1 mét giữa nhà anh ta và cửa hàng đầu tiên và một con đường dài d2 mét giữa nhà anh ta và cửa hàng thứ hai. Ngoài ra, có một con đường dài d3 kết nối trực tiếp hai cửa hàng này với nhau. Giúp Patrick tính toán khoảng cách tối thiểu mà anh ta cần đi bộ để đến cả hai cửa hàng và trở về nhà. Patrick luôn bắt đầu tại nhà của mình. Anh ta nên ghé thăm cả hai cửa hàng chỉ di chuyển dọc theo ba con đường hiện có 
và trở về nhà của anh ta. Anh ta không ngại ghé thăm cùng một cửa hàng hoặc đi qua cùng một con đường nhiều lần. Mục tiêu duy nhất là giảm thiểu tổng quãng đường đã đi.

![Image](https://github.com/user-attachments/assets/5c957ca1-4633-447d-8e16-0e04e3fc63de)

**Gợi ý:** Có 4 cách đi tất cả, tìm quãng đường di chuyển của cả 4 rồi tìm min.

### Input Format
Dòng đầu tiên của đầu vào chứa ba số nguyên `d1, d2, d3` - độ dài của các đường dẫn.
`d1` là chiều dài của con đường nối nhà Patrick và cửa hàng đầu tiên;
`d2` là chiều dài của con đường nối nhà Patrick và cửa hàng thứ hai;
`d3` là chiều dài của đường dẫn kết nối cả hai cửa hàng.

### Constraints
`1<=d1,d2,d3<=10^8`

### Output Format
In khoảng cách tối thiểu mà Patrick sẽ phải đi bộ để ghé thăm cả hai cửa hàng và trở về nhà của mình.

### Sample Input 0
```
832 56 273
```
### Sample Output 0
```
658
```
