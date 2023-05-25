#include <iostream>
#include <string>
using namespace std;

long long replaceDigits(string num, char digitToReplace, char replaceWith) {
    for (char& digit : num) {
        if (digit == digitToReplace) {
            digit = replaceWith;
        }
    }

    return stoll(num);
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string X1, X2;
        cin >> X1 >> X2;

        long long minSum = replaceDigits(X1, '6', '5') + replaceDigits(X2, '6', '5');
        long long maxSum = replaceDigits(X1, '5', '6') + replaceDigits(X2, '5', '6');

        cout << minSum << " " << maxSum << endl;
    }

    return 0;
}

