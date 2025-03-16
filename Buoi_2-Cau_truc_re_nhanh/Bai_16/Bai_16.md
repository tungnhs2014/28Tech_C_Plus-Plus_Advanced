# Bài 16: Kí tự kết tiếp

## Mô tả bài toán  
Cho kí tự chữ cái in hoa hoặc in thường, in ra kí tự tiếp sau nó trong bảng chữ cái ở dạng in thường, tức là kí tự nhập vào ở dạng in hoa hay in thường thì bạn đều in ra kí tự kế tiếp nó nhưng ở dạng in thường. Coi kí tự kế tiếp của nó chữ Z là A.
```c

if (kí tự là z hoặc Z) {
    // in ra a
}
else if (in hoa) {
    // chuyển thành in thường
    // + thêm 1 đơn vị
    // in
}
else {
    // + thêm 1 đơn vị
    // in
}

```

### Input Format
1 dòng chữ kí tự `c`

### Constraints
`c` là chữ cái in hoa hoặc in thường

### Output Format
In ra chữ cái kế tiếp ở dạng in thường.

### Sample Input 0
```
A
```
### Sample Output 0
```
b
```

### Sample Input 1
```
Z
```
### Sample Output 1
```
a
```