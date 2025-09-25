# [Set Map]: Bài 11. Difference

## Mô tả bài toán

Cho mảng A[] và B[] lần lượt gồm N và M số nguyên, nhiệm vụ của bạn là tìm những phần tử xuất hiện trong mảng thứ nhất nhưng **không xuất hiện trong mảng thứ 2**, liệt kê theo thứ tự từ bé đến lớn.

Gợi ý: Dùng 2 set để lưu mảng A, B. Duyệt các phần tử trong set 1 và tìm kiếm nếu phần tử ko nằm trong set 2 thì in ra.

## Input Format

- Dòng 1 gồm N và M
- Dòng 2 gồm N số trong mảng A[]
- Dòng 3 gồm M số trong mảng B[]

## Constraints

- 1<=N,M<=10^5
- -10^9<=A[i],B[i]<=10^9

## Output Format

In ra đáp án của bài toán

## Sample Input 0

```
6 6
1 9 3 8 0 7
3 1 7 3 7 5
```

## Sample Output 0

```
0 8 9
```

## Giải thích

**Mảng A:** [1, 9, 3, 8, 0, 7]
**Mảng B:** [3, 1, 7, 3, 7, 5]

Các phần tử trong A nhưng không có trong B:
- 0: có trong A, không có trong B ✓
- 8: có trong A, không có trong B ✓  
- 9: có trong A, không có trong B ✓

Kết quả sắp xếp theo thứ tự tăng dần: **0 8 9**

## Ghi chú

- Sử dụng Set để loại bỏ phần tử trùng lặp
- Duyệt qua các phần tử trong Set A và kiểm tra xem có tồn tại trong Set B không
- In kết quả theo thứ tự tăng dần