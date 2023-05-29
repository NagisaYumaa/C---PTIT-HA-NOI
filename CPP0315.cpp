#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string findLargestNumber(const string& N) {
    string result = N;
    int n = result.length();
    int i = n - 2;

    // Tìm v? trí i sao cho N[i] > N[i+1]
    while (i >= 0 && result[i] >= result[i + 1]) {
        i--;
    }

    // N?u không tìm th?y v? trí i, t?c là không th? th?c hi?n phép d?i ch?
    if (i == -1) {
        return "-1";
    }

    int j = n - 1;

    // Tìm v? trí j sao cho N[j] < N[i]
    while (result[j] >= result[i]) {
        j--;
    }

    // Hoán d?i ch? s? t?i v? trí i và j
    swap(result[i], result[j]);

    // S?p x?p các ch? s? t? v? trí i+1 d?n cu?i
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

