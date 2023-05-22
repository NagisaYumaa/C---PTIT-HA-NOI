#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); 
    while (t--) {
        string s;
        getline(cin, s);
        int len = s.length(), count = 0;
        for (int i = 0; i < len; i++) {
            for (int j = 1; j <= len - i; j++) {
                if (s[i] == s[i + j - 1]) count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}

