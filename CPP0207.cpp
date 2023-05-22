#include <iostream>
#include <algorithm>
using namespace std;

void reverse(int A[], int l, int r) {
    while (l < r) {
        swap(A[l], A[r]);
        l++;
        r--;
    }
}

void rotateArray(int A[], int n, int d) {
    reverse(A, 0, d-1);
    reverse(A, d, n-1);
    reverse(A, 0, n-1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        rotateArray(A, n, d);
        for (int i = 0; i < n; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

