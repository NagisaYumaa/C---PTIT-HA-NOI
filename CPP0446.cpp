#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        sort(A, A + n);

        int sum = INT_MAX;
        int i = 0, j = n - 1;
        while (i < j) {
            int sum_temp = A[i] + A[j];
            sum = min(sum, abs(sum_temp));

            if (sum_temp < 0) {
                i++;
            } else if (sum_temp > 0) {
                j--;
            } else {
                break;
            }
        }

        cout << sum << endl;
    }

    return 0;
}

