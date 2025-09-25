# [Set Map]: Bài 7. Phần tử xuất hiện ở mọi dòng

## Mô tả bài toán

Cho 1 bảng số gồm N dòng và mỗi dòng gồm N số, nhiệm vụ của bạn là in ra những giá trị xuất hiện ở mọi dòng. Gợi ý: Dùng map đánh dấu, dòng 1 đánh dấu các giá trị = 1, dòng 2 sẽ kiểm tra giá trị nào được đánh dấu tại dòng 1 mới đánh dấu ở dòng 2, tương tự tới dòng n, những số nào được đánh dấu ở cả n dòng sẽ thỏa mãn yêu cầu.

## Input Format

- Dòng 1 là N: số dòng của bảng số
- N dòng tiếp theo mỗi dòng gồm N số nguyên viết cách nhau 1 dấu cách

## Constraints

- 1<=N<=100
- Các số trong bảng số là số nguyên int

## Output Format

In ra các số xuất hiện ở mọi dòng theo thứ tự từ nhỏ đến lớn, nếu không tồn tại số nào in ra NOT FOUND

## Sample Input 0

```
5
5 1 4 0 4
3 2 2 3 0
3 3 4 0 1
0 1 4 4 1
0 0 0 0 2
```

## Sample Output 0

```
0
```

## Giải thích

Trong ví dụ trên:
- Dòng 1: [5, 1, 4, 0, 4]
- Dòng 2: [3, 2, 2, 3, 0] 
- Dòng 3: [3, 3, 4, 0, 1]
- Dòng 4: [0, 1, 4, 4, 1]
- Dòng 5: [0, 0, 0, 0, 2]

Chỉ có số **0** xuất hiện ở tất cả 5 dòng, nên kết quả là 0.

## Ghi chú

- Sử dụng Map để đánh dấu các phần tử xuất hiện ở từng dòng
- Cần kiểm tra phần tử nào xuất hiện đủ N lần (ở tất cả các dòng)
- Kết quả in ra theo thứ tự tăng dần