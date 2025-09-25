# [Set Map]: Bài 25. Set và phần tử thứ 2

## Mô tả bài toán

Cho mảng A[] gồm N phần tử, gọi B[] là mảng chứa các phần tử khác nhau trong mảng A[], bạn hãy in ra:

- Số lượng phần tử của mảng B
- **Giá trị lớn nhất, nhỏ nhất của mảng B[]**
- **Giá trị lớn thứ nhì, nhỏ thứ nhì của mảng B[]**

Dữ liệu đảm bảo B[] có ít nhất 2 phần tử.

## Input Format

- Dòng 1 là N: số lượng phần tử trong mảng
- Dòng 2 là N số cách nhau 1 dấu cách

## Constraints

- 1<=N<=10^6
- -10^9<=A[i]<=10^9

## Output Format

In ra 3 dòng theo yêu cầu

## Sample Input 0

```
17
1 0 9 1 5 1 4 7 9 7 5 2 6 1 3 4 8
```

## Sample Output 0

```
10
9 0
8 1
```

## Giải thích

**Mảng A[]:** [1, 0, 9, 1, 5, 1, 4, 7, 9, 7, 5, 2, 6, 1, 3, 4, 8]

**Mảng B[] (các phần tử khác nhau):** {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}

**Phân tích:**
- **Số lượng phần tử B[]:** 10
- **Giá trị lớn nhất:** 9, **nhỏ nhất:** 0
- **Giá trị lớn thứ nhì:** 8, **nhỏ thứ nhì:** 1

**Kết quả:**
- Dòng 1: **10** (số phần tử khác nhau)
- Dòng 2: **9 0** (max và min)
- Dòng 3: **8 1** (second max và second min)

## Ghi chú

- Sử dụng Set để loại bỏ các phần tử trùng lặp
- Set tự động sắp xếp các phần tử theo thứ tự tăng dần
- Phần tử đầu tiên trong Set là min, cuối cùng là max
- Phần tử thứ hai từ đầu là second min, thứ hai từ cuối là second max
- Có thể sử dụng iterator hoặc chuyển Set sang vector để truy cập phần tử theo index