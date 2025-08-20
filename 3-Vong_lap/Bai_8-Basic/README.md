# Bài 8: Chữ số đầu tiên lớn nhất

## Mô tả bài toán  
Cho số nguyên không âm N, bạn hãy kiểm tra chữ số đầu tiên của N có phải là số lớn nhất trong mọi chữ số của N hay không. Ví dụ N = 9123189 thỏa mãn điều này.

**Gợi ý:** Tìm chữ số lớn nhất ngoại trừ số đầu tiên, lấy số đầu tiên so sánh với chữ số lớn nhất tìm được này. Dùng vòng lặp while (n >= 10) để tách các chữ số ngoại trừ số đầu tiên, sau vòng lặp này thì n chính là số đầu tiên của nó.

### Input Format
- Dòng duy nhất chứa số nguyên `N` 

### Constraints
- `0 <= N <= 10^18`

### Output Format
In ra **YES** nếu N thỏa mãn, ngược lại in ra **NO**

### Sample Input 0
```
9888811237
```
### Sample Output 0
```
YES
```