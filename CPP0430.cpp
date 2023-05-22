#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countMissingElements(const vector<int>& A) {
    int L = *min_element(A.begin(), A.end());
    int R = *max_element(A.begin(), A.end());

    vector<bool> present(R - L + 1, false);

    for (int num : A) {
        present[num - L] = true;
    }


    int count = 0;
    for (bool isPresent : present) {
        if (!isPresent) {
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

        vector<int> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }


        int missingCount = countMissingElements(A);
        cout << missingCount << endl;
    }

    return 0;
}

