#include <iostream>
#include <climits>
using namespace std;

int findMaxDifference(int arr[], int n) {
    int maxDiff = -1;
    int minElement = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] > minElement) {
            maxDiff = max(maxDiff, arr[i] - minElement);
        }
        minElement = min(minElement, arr[i]);
    }

    return maxDiff;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int maxDiff = findMaxDifference(arr, n);
        cout << maxDiff << endl;
    }

    return 0;
}

