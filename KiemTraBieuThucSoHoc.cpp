#include <bits/stdc++.h>
using namespace std;
string solve(string s) {
    stack <char> stk;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == ')') {
            char top = stk.top();
            stk.pop();
            bool flag = true; //true = th?a
            while (top != '(') {
                if (top == '+' || top == '-' ||
                    top == '*' || top == '/')
                        flag = false;
                top = stk.top();
                stk.pop();
            }
            if (flag == true) 
                return "Yes";
        }
        else stk.push(s[i]);
    }
    return "No";
}
int main() {
    int t; cin >> t;
    string s;
    while (t--) {
        getline(cin >> ws, s);
        cout << solve(s) << endl;
    }
}
