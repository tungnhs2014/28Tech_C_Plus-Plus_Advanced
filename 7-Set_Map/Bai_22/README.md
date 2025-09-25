# [Set Map]: Bài 22. Số lần xuất hiện

## Mô tả bài toán

Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn đó là với mỗi phần tử trong mảng bạn hãy chỉ ra đó là lần thứ mấy nó xuất hiện? Ví dụ mảng A[] = {1, 2, 3, 1, 4, 2, 3} sẽ có kết quả là 1, 1, 1, 2, 1, 2, 2

Gợi ý: Cách 1 các bạn dùng multiset và hàm count. **Cách 2 là dùng map.**

## Input Format

- Dòng 1 là N: số lượng phần tử trong mảng
- Dòng 2 là N số cách nhau 1 dấu cách

## Constraints

- 1<=N<=10^6
- -10^9<=A[i]<=10^9

## Output Format

In ra kết quả của bài toán

## Sample Input 0

```
10
1 0 1 0 4 0 1 3 3 0
```

## Sample Output 0

```
1 1 2 2 1 3 3 1 2 4
```

## Giải thích

**Mảng đầu vào:** [1, 0, 1, 0, 4, 0, 1, 3, 3, 0]

**Phân tích từng phần tử:**
- Phần tử 1 (vị trí 0): là lần thứ **1** xuất hiện số 1
- Phần tử 0 (vị trí 1): là lần thứ **1** xuất hiện số 0
- Phần tử 1 (vị trí 2): là lần thứ **2** xuất hiện số 1
- Phần tử 0 (vị trí 3): là lần thứ **2** xuất hiện số 0
- Phần tử 4 (vị trí 4): là lần thứ **1** xuất hiện số 4
- Phần tử 0 (vị trí 5): là lần thứ **3** xuất hiện số 0
- Phần tử 1 (vị trí 6): là lần thứ **3** xuất hiện số 1
- Phần tử 3 (vị trí 7): là lần thứ **1** xuất hiện số 3
- Phần tử 3 (vị trí 8): là lần thứ **2** xuất hiện số 3
- Phần tử 0 (vị trí 9): là lần thứ **4** xuất hiện số 0

**Kết quả:** 1 1 2 2 1 3 3 1 2 4

## Ghi chú

- **Cách 1:** Sử dụng multiset và hàm count() để đếm số lần xuất hiện
- **Cách 2:** Sử dụng map để lưu trữ số lần xuất hiện của mỗi phần tử, tăng dần khi gặp phần tử đó
- Cần duyệt qua mảng theo thứ tự và theo dõi số lần xuất hiện của từng phần tử