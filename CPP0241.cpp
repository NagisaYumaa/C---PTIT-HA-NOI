#include <iostream>
using namespace std;

int mergeArray(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            count++;
        }
    }

    return count;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int arr[1000];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int count = mergeArray(arr, n);

        cout << count << endl;
    }

    return 0;
}

