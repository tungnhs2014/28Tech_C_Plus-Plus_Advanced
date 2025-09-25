# [Set Map]: Bài 21. Đếm tần suất của phần tử trong mảng

## Mô tả bài toán

Cho mảng A[] gồm N phần tử là ký tự, bạn hãy đếm xem có bao nhiều ký tự khác nhau trong mảng. Gợi ý: Để in theo thứ tự từ điển bạn chỉ cần duyệt set, còn in theo thứ tự ngược các bạn có thể dùng iterator ngược hoặc đưa các phần tử trong set ra vector rồi in từ cuối vector về đầu.

## Input Format

- Dòng 1 là N: số lượng phần tử trong mảng
- Dòng thứ 2 gồm N ký tự trong mảng

## Constraints

- 1<=N<=10^6
- Các ký tự là chữ cái hoặc chữ số

## Output Format

- Dòng 1 in ra số lượng ký tự khác nhau trong mảng
- Dòng 2 in ra các ký tự khác nhau theo thứ tự từ điển tăng dần
- Dòng 3 in ra các ký tự khác nhau theo thứ tự từ điển giảm dần

## Sample Input 0

```
12
2 a h t t 2 h e h a h t
```

## Sample Output 0

```
5
2 a e h t
t h e a 2
```

## Giải thích

**Mảng đầu vào:** [2, a, h, t, t, 2, h, e, h, a, h, t]

**Các ký tự khác nhau:** 2, a, e, h, t (tổng cộng 5 ký tự)

**Kết quả:**
- Số lượng ký tự khác nhau: **5**
- Thứ tự tăng dần: **2 a e h t**
- Thứ tự giảm dần: **t h e a 2**

## Ghi chú

- Sử dụng Set để loại bỏ các ký tự trùng lặp
- Set tự động sắp xếp theo thứ tự từ điển
- Để in theo thứ tự ngược, có thể dùng reverse iterator hoặc chuyển sang vector và in từ cuối về đầu
- Kích thước của Set chính là số lượng ký tự khác nhau