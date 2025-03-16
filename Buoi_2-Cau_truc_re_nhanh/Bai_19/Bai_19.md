# Bài 19: Domino

## Mô tả bài toán  
Bạn được cung cấp một bảng chữ nhật có kích thước M x N hình vuông đơn vị. Ngoài ra, bạn được cung cấp một số lượng không giới hạn các mảnh domino tiêu chuẩn kích thước 2 x 1. Bạn được phép xoay các mảnh domino. Bạn được yêu cầu đặt càng nhiều domino càng tố trên bảng để đáp ứng các điều kiện sau:
1. Mỗi domino hoàn toàn bao gồm 2 hình vuông đơn vị.
2. Không có 2 domino trùng nhau.
3. Mỗi domino nằm hoàn toàn bên trong bảng. Nó được phép chạm vào các cạnh của bảng. Tìm số lượng domino tối đa thỏa mãn điều kiện trên.
 
**Gợi ý:** Tính xem mỗi cột cần đặt bao nhiêu thanh domino (đặt dọc) => Nhân với số cột lẩ số thanh domino. Trong trường hợp số hàng của HCN là số chẵn thì số domino trên 1 cột sẽ là m/2, còn trong trường hợp hàng lẻ thì bạn tính số domino của HCN (m - 1) * n trước rồi xét hàng cuối cùng (đặt ngang). 

### Input Format
2 số nguyên dương `M` và `N`

### Constraints
`1 <= M, N <= 10^9`

### Output Format
In ra số thanh domino cần thiết.

### Sample Input 0
```
3 3
```
### Sample Output 0
```
4
```

### Sample Input 1
```
2 4
```
### Sample Output 1
```
4
```