## Bài 8. Phép chia

### Mô tả bài toán
- Trong ngôn ngữ lập trình như C, C++, Java khi bạn sử dụng 2 số nguyên để chia cho nhau thì kết quả của phép chia đó chỉ dữ lại phần nguyên cho dù bạn có để kết quả ở số thực như float hay double. 
- **Ví dụ** a = 10, b = 3 thì phép chia a / b sẽ có kết quả là 3 thay vì 3.3333, để lấy được phần thập phân khi chia 2 số nguyên cho nhau bạn cần thực hiện ép kiểu a hoặc b, hoặc cả 2 và b sang dạng số thực trước khi chia. Ví dụ float c = (float) a / b thì khi đó c = 3.3333

### Đầu vào
- 1 dòng duy nhất chứa lần lượt 2 số nguyên b và a

### Ràng buộc
- 1<=a,b<=1000

### Đầu ra
- Dòng 1 in ra thương của a / b khi sử dụng phép chia nguyên 
- Dòng 2 in ra thương của a / b khi sử dụng phép chia lấy phần thập phân với độ chính xác 2 số sau dấu phẩy.

### Ví dụ
#### Input 01
    30 70

#### Output 01
    2
    2.33