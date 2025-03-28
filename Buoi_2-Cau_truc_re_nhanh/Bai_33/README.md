# Bài 33: Chia tiền

## Mô tả bài toán  
Polycarp có ba chị em: Alice, Barbara và Cerene. Họ đang thu thập tiền xu. Hiện tại, Alice có một đồng tiền, Barbara có tiền xu và Cerene có tiền xu. Gần đây Polycarp đã trở về từ chuyến đi vòng quanh thế giới và mang theo n xu. Anh ta muốn phân phối tất cả n xu này giữa các chị em của mình theo cách mà số lượng tiền Alice có bằng số lượng tiền mà Barbara có và bằng với số lượng tiền mà Cerene có. Nói cách khác, nếu Polycarp đưa A xu cho Alice, B xu cho Barbara và C xu cho Cerene (A + B + C = n), thì a + A = b + B = c + C. Lưu ý rằng A, B hoặc C (số lượng tiền mà Polycarp đưa cho Alice, Barbara và Cerene tương ứng) có thể là 0. Nhiệm vụ của bạn là tìm hiểu xem có thể phân phối tất cả n xu giữa các chị em theo cách được mô tả ở trên không.

**Gợi ý:** Điều kiện cần: (a + b +c) chia hết cho 3.

Điều kiện đủ: Sau khi chia thì mỗi người có lượng tiền => lượng tiền ban đầu của họ. Ví dụ: test 1 1 9 1 dù chia hết cho 3 nhưng không thỏa mãn vì khi đó phải lấy tiền của 3 người đưa cho nhau.

### Input Format
- 4 số nguyên trên 1 dòng a, b, c, n.
- a, b, c là số tiên ban đầu mà Alice, Barbara, Cerene có.

### Constraints
`0<=a,b,c,n<= 10^8` 

### Output Format
In "YES" nếu Polycarp có thể phân phối tất cả n xu giữa các chị em của mình và "NO" nếu không.

### Sample Input 0
```
5 1 3 4
```
### Sample Output 0
```
800
```
