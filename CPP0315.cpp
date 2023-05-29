#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string findLargestNumber(const string& N) {
    string result = N;
    int n = result.length();
    int i = n - 2;

    // T�m v? tr� i sao cho N[i] > N[i+1]
    while (i >= 0 && result[i] >= result[i + 1]) {
        i--;
    }

    // N?u kh�ng t�m th?y v? tr� i, t?c l� kh�ng th? th?c hi?n ph�p d?i ch?
    if (i == -1) {
        return "-1";
    }

    int j = n - 1;

    // T�m v? tr� j sao cho N[j] < N[i]
    while (result[j] >= result[i]) {
        j--;
    }

    // Ho�n d?i ch? s? t?i v? tr� i v� j
    swap(result[i], result[j]);

    // S?p x?p c�c ch? s? t? v? tr� i+1 d?n cu?i
    sort(result.begin() + i + 1, result.end());

    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string N;
        cin >> N;

        string result = findLargestNumber(N);

        if (result == N) {
            cout << "-1" << "\n";
        } else {
            cout << result << "\n";
        }
    }

    return 0;
}

