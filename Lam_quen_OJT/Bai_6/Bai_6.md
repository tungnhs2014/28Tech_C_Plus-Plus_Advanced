## Bài 6: Hàm ceil, floor và round  

### Mô tả bài toán  
Cho số thực `X`. Nhiệm vụ của bạn là sử dụng 3 hàm:  
- `floor(X)`: Làm tròn xuống số nguyên gần nhất nhỏ hơn hoặc bằng `X`.  
- `ceil(X)`: Làm tròn lên số nguyên gần nhất lớn hơn hoặc bằng `X`.  
- `round(X)`: Làm tròn số nguyên gần nhất với `X`, phụ thuộc vào phần thập phân.  

**Lưu ý:**  
- Bạn cần in ra số nguyên nên không được in trực tiếp giá trị của 3 hàm này vì chúng có thể trả về số thực.  

---

### Đầu vào  
- Dòng duy nhất chứa số thực `X`.  

---

### Ràng buộc  
- 1 <= N <= 10^6 

---

### Đầu ra  
- In ra 3 số trên 3 dòng:  
  1. Số nguyên nhỏ hơn gần `X` nhất (sử dụng `floor`)  
  2. Số nguyên lớn hơn gần `X` nhất (sử dụng `ceil`)  
  3. Số nguyên gần `X` nhất (sử dụng `round`)  

---

### Ví dụ  

#### Input 01  
    3.59

#### Output 01
    3
    4
    4

