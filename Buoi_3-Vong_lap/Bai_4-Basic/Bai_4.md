# Bài 4: Vòng lặp while

## Mô tả bài toán  
Cho số nguyên dương N. Hãy viết vòng lặp while để
1. In ra các số nguyên dương chia hết cho 3 <= N (sử dụng bước nhảy 3)
2. In ra các số nguyên không âm chia hết cho cả 3 và 5 < N
3. Số nhỏ nhất >= N chia hết cho 7 (sử dụng break và for khuyết điều kiện lặp)
```c
for (int i = n; ; i++) {
    // Nếu i chia hết cho 7 thì in ra và break
}
```
4. Số lớn nhất <= N chia hết cho 9 (sử dụng break)
```c
for (int i = n; i >= 0; i--) {
    // Nếu i chia hết cho 9 thì đúng
}
```
5. In ra dãy số: 1,3,5,7,9,...2N-1

### Input Format
- Dòng duy nhất chứa `N` 

### Constraints
- `10 <= N <= 1000`

### Output Format
In ra 5 dòng tương theo yêu cầu.

### Sample Input 0
```
20
```
### Sample Output 0
```
3 6 9 12 15 18 
0 15 
21
18
1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 
```