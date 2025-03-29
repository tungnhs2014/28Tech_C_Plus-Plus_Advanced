# Bài 21: Frog.

## Mô tả bài toán  
Một con ếch hiện đang ở điểm 0 trên trục tọa độ Ox. Nó nhảy theo thuật toán sau: bước nhảy thứ nhất là a đơn vị về bên phải, bước nhảy thứ hai là b đơn vị về bên trái, bước nhảy thứ ba là a đơn vị bên phải, bước nhảy thứ tư là b đơn vị bên trái, v.v. . Nếu con ếch đã nhảy một số lần chẵn (trước lần nhảy hiện tại), nó nhảy từ vị trí hiện tại x sang vị trí x + a, mặt khác, nó nhảy từ vị trí hiện tại x sang vị trí x − b. Nhiệm vụ của bạn là tính toán vị trí của ếch sau k bước nhảy
 
**Gợi ý:** Tìm số bước nhảy của Frog sang bên trái và bên phải, gọi là t và p, khi đó vị trí của Frog sẽ là tổng khoảng cách nhảy sang phải - tổng khoảng cách nhảy sang trái.

### Input Format
3 số trên cùng một dòng tương ứng `a`, `b`, `k`

### Constraints
`1 <= a, b, k <= 10^9`

### Output Format
Vị trí của con ếch sau k bước nhảy.

### Sample Input 0
```
5 2 3
```
### Sample Output 0
```
8
```
