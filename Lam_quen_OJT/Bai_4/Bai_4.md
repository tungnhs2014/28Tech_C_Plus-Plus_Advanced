# Bài 4: Hàm Pow 

## Mô tả bài toán  
Cho 2 số nguyên dương `x` và `y`. Nhiệm vụ của bạn là tính giá trị của biểu thức \( x^y \) (x mũ y).  

**Gợi ý:**  
- Cần ép giá trị của hàm `pow(x, y)` sang kiểu `long long` để tránh hiện thị dưới dạng số thực.  
- Nếu in trực tiếp `pow(x, y)` có thể sẽ hiện thị dạng số mũ, ví dụ: `2.14359e+08`.  

---

## Đầu vào  
- 1 dòng chứa 2 số nguyên dương `x` và `y`, cách nhau một dấu cách.  

---

## Ràng buộc  
- 1 <= x, y <= 12 

---

## Đầu ra  
- In ra giá trị của x^y.  
  - Nếu kết quả có phần thập phân, in ra 2 chữ số sau dấu phẩy.  
  - Nếu không có phần thập phân, không cần in dấu phẩy.  

---

## Ví dụ  

### Sample Input 01  
    2 2

### Sample Output 01  
    4
