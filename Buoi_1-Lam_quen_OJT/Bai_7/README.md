## Bài 7: Chữ số cuối cùng & 2 chữ số cuối cùng

### Mô tả bài toán
- Cho nguyên dương **N**, bạn hãy sử dụng phép chia dư để lấy ra chữ số cuối cùng và **2 chữ số cuối cùng của N.**
- **Gợi ý:** Chữ số cuối cùng của N thì lấy N % 10, 2 chữ số cuối cùng thì lấy N % 100, 3 chữ số cuối cùng thì lấy N % 1000....

### Đầu vào
- 1 dòng duy nhất chứa số nguyên dương N

### Ràng buộc
- 100<=N<=10^18

### Đầu ra
- Dòng 1 in ra chữ số cuối cùng
- Dòng 2 in ra 2 chữ số cuối cùng, nếu 2 chữ số cuối cùng của N có số 0 ở đầu thì bạn bỏ đi số 0 đó và chỉ in ra số cuối cùng.

### Ví dụ
#### Input 01
    1005

#### Output 01
    5
    5

#### Input 02
    1234

#### Output 02
    4
    34