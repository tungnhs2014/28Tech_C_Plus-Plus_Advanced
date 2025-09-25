# [Set Map]: Bài 15. Set vs Lower_bound, Upper_bound

## Mô tả bài toán

Cho 1 mảng A[] gồm N số nguyên, 28tech cung cấp cho bạn các thao tác sau:

- **1 x:** Thêm phần tử x vào mảng A[]
- **2 x:** Xóa phần tử x khỏi mảng A[] nếu x tồn tại trong mảng, và nếu x xuất hiện nhiều lần bạn chỉ xóa đi 1 phần tử duy nhất.
- **3 x:** Chỉ ra giá trị đầu tiên của phần tử >= x trong A[] khi mảng A[] được sắp xếp tăng dần, nếu không tồn tại in ra -1
- **4 x:** In ra giá trị của phần tử lớn nhất <= x trong mảng A[], nếu không tồn tại phần tử này thì in ra -1.

## Input Format

- Dòng 1 là N
- Dòng 2 là N phần tử A[]
- Dòng 3 là số lượng thao tác T
- T dòng tiếp theo mô tả thao tác.

## Constraints

- 1<=N<=1000
- 1<=A[i],X<=1000;
- 1 <= T <= 1000

## Output Format

Đối với thao tác 3 và 4, in ra kết quả tương ứng

## Sample Input 0

```
9
6 4 9 3 8 6 8 1 6
9
4 3
4 6
3 6
3 4
1 6
2 6
2 7
4 4
1 4
```

## Sample Output 0

```
3
6
6
4
4
```

## Giải thích

**Mảng ban đầu:** [6, 4, 9, 3, 8, 6, 8, 1, 6] → Set: {1, 3, 4, 6, 8, 9}

**Các thao tác:**
1. `4 3` - Tìm phần tử lớn nhất <= 3 → **3**
2. `4 6` - Tìm phần tử lớn nhất <= 6 → **6** 
3. `3 6` - Tìm phần tử nhỏ nhất >= 6 → **6**
4. `3 4` - Tìm phần tử nhỏ nhất >= 4 → **4**
5. `1 6` - Thêm 6 (không thay đổi set vì đã có)
6. `2 6` - Xóa một phần tử 6
7. `2 7` - Xóa 7 (không có trong mảng)
8. `4 4` - Tìm phần tử lớn nhất <= 4 → **4**

## Ghi chú

- Sử dụng multiset để lưu trữ các phần tử (cho phép trùng lặp)
- Thao tác 3: tương đương với lower_bound()
- Thao tác 4: tương đương với upper_bound() - 1
- Cần xử lý trường hợp không tìm thấy (in -1)