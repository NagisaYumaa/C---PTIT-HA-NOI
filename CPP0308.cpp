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
        int count[26] = {0};
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'A']++; 
        }
        bool found = false;
        for (int i = 0; i < s.length(); i++) {
            if (count[s[i] - 'A'] == 1) { 
                cout << s[i];
                found = true;
            }
        }
        if (!found) cout << "-1"; 
        cout << endl;
    }
    return 0;
}

