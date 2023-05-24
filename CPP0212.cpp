#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

long long tinhLuyThuaMod(long long coSo, long long soMu) {
    long long ketQua = 1;

    while (soMu > 0) {
        if (soMu % 2 == 1) {
            ketQua = (ketQua * coSo) % MOD;
        }
        coSo = (coSo * coSo) % MOD;
        soMu /= 2;
    }

    return ketQua;
}

long long tinhGiaTriDaThuc(int bac, int x, int heSo[]) {
    long long ketQua = 0;

    for (int i = 0; i < bac; i++) {
        ketQua = (ketQua + (heSo[i] * tinhLuyThuaMod(x, bac - 1 - i)) % MOD) % MOD;
    }

    return ketQua;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int bac, x;
        cin >> bac >> x;

        int heSo[bac];
        for (int i = 0; i < bac; i++) {
            cin >> heSo[i];
        }

        long long ketQua = tinhGiaTriDaThuc(bac, x, heSo);
        cout << ketQua << endl;
    }

    return 0;
}

