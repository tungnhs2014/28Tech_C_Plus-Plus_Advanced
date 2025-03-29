# Bài 11: Kiểm tra tam giác

## Mô tả bài toán  
Cho 3 cạnh a, b, c là đô dài của tam giác, nếu tam giác đã cho là tam giác đều thì in ra 1; tam giác cân thì in ra 2; tam giác vuông thì in ra 3; tam giác thường thì in ra 4; trường hợp tam giác nhập vào không hợp lệ thì in ra "INVALID"
```c
if (tam giác hơp lệ) {
    // TH1: kiểm tra đều
    // TH2: kiểm tra cân (3 trường hợp)
    // TH3: Kiểm tra vuông (3 trường hợp)
}
else {
    cout <<"INVALID\n";
}
```

### Input Format
1 dòng chứa `a, b, c`.

### Constraints
`0 <= a, b, c <= 10^3`

### Output Format
In ra kết quả tương ứng

### Sample Input 0
```
8 8 8 
```
### Sample Output 0
```
1
```

### Sample Input 1
```
8 8 6 
```
### Sample Output 1
```
2
```