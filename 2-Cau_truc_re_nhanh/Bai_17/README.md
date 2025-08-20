# Bài 17: Kiểm tra chữ cái

## Mô tả bài toán  
Cho một kí tự, bạn hãy kiểm tra kí tự nhập vào là chữ cái in hoa, in thường, chữ số hay kí tự đặc biệt (các kí tự không phải chữ cái và chữ số)
```c

if (in hoa) {
    "UPPER"
}
else if (in thường) {
    "LOWER"
}
else if (chữ số) {
    "DIGIT"
}
else {
    "SPECIAL"
}

```

### Input Format
1 dòng chữ kí tự `c`

### Constraints
`c` là chữ cái in hoa, in thường, chữ số hoặc kí tự đặc biệt.

### Output Format
Nếu c là chứ cái in hoa in ra "UPPER". Nếu c là chữ cái in thường in ra "LOWER". Nếu c là chữ số in ra "DIGIT". Nếu c là kí tự đặc biệt in ra "SPECIAL".

### Sample Input 0
```
A
```
### Sample Output 0
```
UPPER
```