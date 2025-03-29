# Bài 6: Luyện tập viết câu điều kiện

## Mô tả bài toán  
Cho một số nguyên không âm N. Bạn hãy thực hiện viết câu lệnh để kiểm tra các điều kiện sau:
1. N có phải là số chẵn? (Kiểm tra só dư của N với 2 và so sánh với 0)
2. N có phải là số vừa chia hết cho 3 vừa chia hết cho 5? (Kết hợp 2 điều kiện sử dụng &&)
3. N có phải là số chia hết cho 3 nhưng không chia hết cho 7? (Kết quả hợp 2 điều kiện sử dụng &&)
4. N có phải là số chia hết cho 3 hoặc 7? (Kết hợp 2 điều kiện sử dụng ||)
5. N là số lớn hơn 30 và nhỏ hơn 50? (Kết hợp 2 điều kiện sử dụng &&)
6. N có phải là số không nhỏ hơn 30 và chia hết cho ít nhất một trong 3 số 2, 3, 5? (Lớn hơn hoặc bằng 30 && chia hết ....)
7. N có phải là số có 2 chữ số có chữ tận cùng là một số nguyên tố? (>= 10, <= 99, kiểm tra chữ số tận cùng là 2, 3, 5, 7)
8. N có phải là số không vượt quá 100 và chia hết cho 23?
9. N không thuộc đoạn [10, 20]?
10. N có chữ số tận cùng là bội số của 3?

### Input Format
Số nguyên dương N

### Constraints
- `1 <= N <= 10^6`

### Output Format
In ra 10 dòng, mỗi dòng là "YES" hoặc "NO" tương ứng với 10 điều kiện. Nếu N thỏa mãn điều kiện thứ i thì dòng i in ra YES, ngược lại in ra NO.

### Sample Input 0
    263

### Sample Output 0
    NO
    NO
    NO
    NO
    NO
    NO
    NO
    NO
    YES
    YES

### Sample Input 1
    380

### Sample Output 1
    YES
    NO
    NO
    NO
    NO
    YES
    NO
    NO
    YES
    YES

### Sample Input 2
    52

### Sample Output 2
    YES
    NO
    NO
    NO
    NO
    NO
    YES
    YES
    NO
    YES
