#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // 1. N có phải số chẵn?
    if (N % 2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    // 2. N có chia hết và chia hết cho 5?
    if (N % 5 == 0 && N % 3 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    // 3. N có chia hết cho 3 nhưng không chia hết cho 7?
    if (N % 3 == 0 && N % 7 != 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    // 4. N có chia hết cho 3 hoặc 7?
    if (N % 3 == 0 || N % 7 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    // 5. N có lớn hơn 30 và nhỏ hơn 50?
    if (N > 30 && N < 50)
        cout << "YES\n";
    else
        cout << "NO\n";

    // 6. N có không nhỏ hơn 30 và chia hết cho ít nhất một trong các số 2, 3, 5?
    if (N >= 30 && (N % 2 == 0 || N % 3 == 0 || N % 5 == 0))
        cout << "YES\n";
    else
        cout << "NO\n";

    // 7. N có phải số có hai chữ số và có chữ số tận cùng là số nguyên tố (2, 3, 5, 7)?
    if (N >= 10 && N <= 99) {
        int last_digit = N % 10;
        if (last_digit == 2 || last_digit == 3 || last_digit == 5 || last_digit == 7)
            cout << "YES\n";
        else
            cout << "NO\n";
    } else {
        cout << "NO\n";
    }

    // 8. N có phải số không vượt quá 100 và chia hết cho 23?
    if (N <= 100 && N % 23 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    // 9. N không thuộc đoạn [10, 20]?
    if (N < 10 || N > 20)
        cout << "YES\n";
    else
        cout << "NO\n";

    // 10. N có chữ số tận cùng là bội số của 3?
    if ((N % 10) % 3 == 0)
        cout << "YES\n";

    return 0;
}