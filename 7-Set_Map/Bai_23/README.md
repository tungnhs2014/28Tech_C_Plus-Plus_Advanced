# [Set Map]: Bài 23. Liệt kê tần suất chẵn

## Mô tả bài toán

Cho mảng A[] gồm N phần tử, bạn hãy in ra các giá trị có số lần xuất hiện chẵn trong mảng.

## Input Format

- Dòng 1 là N: số lượng phần tử trong mảng
- Dòng 2 là N số cách nhau 1 dấu cách

## Constraints

- 1<=N<=10^6
- -10^9<=A[i]<=10^9

## Output Format

Đầu tiên bạn in ra theo thứ tự tăng dần các giá trị sau đó cách ra 1 dòng và in ra theo thứ tự giảm dần về các giá trị

## Sample Input 0

```
11
2 2 1 2 4 4 3 2 4 0 0
```

## Sample Output 0

```
0 2
2 4

4 2
0 2
```

## Giải thích

**Mảng đầu vào:** [2, 2, 1, 2, 4, 4, 3, 2, 4, 0, 0]

**Đếm tần suất:**
- Số 0: xuất hiện 2 lần (chẵn) ✓
- Số 1: xuất hiện 1 lần (lẻ) ✗
- Số 2: xuất hiện 4 lần (chẵn) ✓
- Số 3: xuất hiện 1 lần (lẻ) ✗
- Số 4: xuất hiện 3 lần (lẻ) ✗

**Các phần tử có tần suất chẵn:** 0 (2 lần), 2 (4 lần)

**Kết quả:**
- **Thứ tự tăng dần:** 0 2, 2 4 (giá trị và tần suất)
- **Dòng trống**
- **Thứ tự giảm dần:** 2 4, 0 2 (giá trị và tần suất)

## Ghi chú

- Sử dụng Map để đếm tần suất xuất hiện của từng phần tử
- Chỉ in ra những phần tử có tần suất chẵn (chia hết cho 2)
- In theo định dạng: giá_trị tần_suất
- Cần in cả thứ tự tăng dần và giảm dần, cách nhau một dòng trống