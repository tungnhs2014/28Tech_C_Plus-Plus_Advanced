# Bài 32: Ghép số

## Mô tả bài toán  
Gần đây Anton tìm thấy một hộp có chữ số trong phòng của mình. Có k2 chứ số 2, k3 chữ số 3, k5 chữ số 5 và k6 chữ số 6. Số nguyên yêu thích của Anton là 32 và 256. Anh quyết định soạn số nguyên này từ các chữ số anh có. Anh ta muốn làm cho tổng các chữ số nguyên này càng lớn càng tốt. Giúp anh ta giải quyết nhiệm vụ này! Mỗi chữ số có thể được sử dụng không quá một lần, tức là các số nguyên tổng hợp nên chứa không quá k2 chữ số 2, k3 chữ số 3,vv. Tất nhiên, các chữ số không sử dụng không được tính vào tổng.

**Gợi ý:** Tìm số 256 trước => k256 = min(k2, k5, k6).
Tìm số 32 sau => k32 = min (k3, k2 - k256)

### Input Format
Dòng duy nhất của đầu vào chứa bốn số nguyên k2, k3, k5 và k6 - số chữ số 2, 3, 5 và 6 tương ứng.

### Constraints
`0<=k2, k3, k5, k6 <= 10^9` 

### Output Format
In một số nguyên - tổng số tối đa có thể có của các số nguyên yêu thích của Anton có thể được tạo bằng các chữ số từ hộp.

### Sample Input 0
```
5 1 3 4
```
### Sample Output 0
```
800
```
