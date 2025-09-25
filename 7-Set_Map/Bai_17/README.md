# [Set Map]: Bài 17. Truy vấn ký tự

## Mô tả bài toán

Cho một xâu kí tự S chỉ bao gồm các kí tự từ a tới z. Bạn được yêu cầu thực hiện các nhiệm vụ sau bằng CTDL phù hợp:

1. Tìm kí tự có tần suất xuất hiện nhiều nhất và có thứ tự từ điển nhỏ nhất.
2. **Tìm kí tự có tần suất xuất hiện nhỏ nhất và có thứ tự từ điển lớn nhất.**
3. Tìm số lượng kí tự khác nhau trong xâu.

## Input Format

Xâu kí tự S.

## Constraints

1 ≤ len(S) ≤ 10^6;

## Output Format

- Dòng đầu tiên in ra kí tự có tần suất lớn nhất, nếu có nhiều kí tự có cùng tần suất in ra kí tự có thứ tự từ điển nhỏ nhất.
- Dòng thứ 2 in ra kí tự có tần suất nhỏ nhất, nếu có nhiều kí tự có cùng tần suất thì in ra kí tự có thứ tự từ điển lớn nhất.
- Dòng 3 in ra số lượng kí tự khác nhau trong xâu.

## Sample Input 0

```
mghzbzhrucwgjssatuhlewradwtbmyqdjcksyskyhrgcubtoirjwnaxfqgenshrjtf
```

## Sample Output 0

```
h 5
o 1
24
```

## Giải thích

Trong xâu đã cho:
- Ký tự **h** xuất hiện 5 lần (nhiều nhất) và có thứ tự từ điển nhỏ nhất trong các ký tự cùng tần suất
- Ký tự **o** xuất hiện 1 lần (ít nhất) và có thứ tự từ điển lớn nhất trong các ký tự cùng tần suất  
- Có **24** ký tự khác nhau trong xâu

## Ghi chú

- Sử dụng Map để đếm tần suất xuất hiện của từng ký tự
- Cần xử lý điều kiện thứ tự từ điển khi có nhiều ký tự cùng tần suất
- Số lượng ký tự khác nhau = kích thước của Map