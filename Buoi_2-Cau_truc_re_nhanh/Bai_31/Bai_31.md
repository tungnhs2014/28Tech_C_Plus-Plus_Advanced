# Bài 31: Bizon the Champion

## Mô tả bài toán  
Bizon the Champion gần đây đã có một món quà - một tủ kính mới có n kệ và anh quyết định đặt tất cả những món quà của mình ở đó. Tất cả món quà có thể được chia thành hai loại: huy chương và cúp. Bizon the Champion có a1 cúp giải nhất, a2 cúp giải nhì và a3 cúp giải 3. Bên cạnh đó, anh có b1 huy chương giải nhất, b2 huy chương giải nhì và b3 huy chương giải 3. Đương nhiên, phần thưởng trong tủ phải sắp xếp cho thật đẹp, đó là lý do Bizon Champion quyết định tuân theo các quy tắc: bất kỳ kệ nào cũng không thể chứa cả cúp và huy chương cùng một lúc; không có kệ có thể chứa nhiều hơn 5 cúp; không có kệ có hơn 10 huy chương. Giúp Bizon the Champion tìm hiểu xem có thể đặt tất cả các phần thưởng để tất cả các điều kiện được đáp ứng hay không.

**Gợi ý:** Tính tổng số cúp => tìm số kệ đựng cúp (chia hết cho 5 hay không). Ví dụ 12 cúp => 3 kệ, 10 cúp => 2 kệ. Tính tổng số huy chương => tìm kệ đựng huy chương (chia hết cho 10 khay không). Nếu tổng kệ <= n thì in YES.

### Input Format
Dòng đầu tiên chứa các số nguyên a1, a2, a3. Dòng thứ hai chứa các số nguyên b1, b2, b3 (0 <= b1, b2, b3 <= 100). Dòng thứ ba chứa số nguyên n. Các số trong các dòng được phân tích bằng khoảng trắng đơn.

### Constraints
`0<=a1,a2,a3<=100;`
`0<=b1,b2,b3<=100;` 
`1<=n<=100`

### Output Format
In YES nếu tất cả các phần thưởng có thể được đưa lên kệ theo cách được mô tả. Nếu không, hãy in NO

### Sample Input 0
```
1 1 1
1 1 1
4
```
### Sample Output 0
```
YES
```

### Sample Input 1
```
1 1 3
2 3 4
2
```
### Sample Output 1
```
YES
```

### Sample Input 2
```
1 0 0
1 0 0
1
```
### Sample Output 2
```
NO
```