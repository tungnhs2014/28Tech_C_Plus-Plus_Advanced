# [Set Map]: Bài 5. Tần Suất Ký Tự

## Mô tả bài toán

Cho N kí tự được nhập từ bàn phím, bạn hãy thực hiện các yêu cầu sau:

1. In ra kí tự có tần số điền nhỏ nhất và tần suất xuất hiện của nó
2. In ra kí tự có tần số lớn nhất và tần suất xuất hiện của nó  
3. In ra các **kí tự xuất hiện trong N kí tự đã cho theo thứ tự từ điển tăng dần** kèm tần suất của nó
4. In ra các kí tự xuất hiện trong N kí tự đã cho theo thứ tự từ điển giảm dần kèm tần suất của nó

## Input Format

- Dòng 1 là N: số lượng kí tự
- Dòng 2 gồm N kí tự viết cách nhau 1 dấu cách

## Constraints

- 1<=N<=10^5

## Output Format

In ra kết quả của 4 yêu cầu, mỗi yêu cầu viết cách nhau 1 dòng

## Sample Input 0

```
20
E a q A z A F F A f G r r t p g D p n M
```

## Sample Output 0

```
A 3
z 1
A 3
D 1
E 1
F 2
G 1
M 1
a 1
```

## Ghi chú

- Bài toán yêu cầu xử lý tần suất xuất hiện của các ký tự
- Cần sắp xếp theo thứ tự từ điển (lexicographical order)
- Lưu ý phân biệt chữ hoa và chữ thường