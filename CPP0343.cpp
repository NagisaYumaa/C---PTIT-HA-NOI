#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); 

    while (t--) {
        string line;
        getline(cin, line); 

        istringstream iss(line); 
        int n, even = 0, odd = 0;
        while (iss >> n) {
            if (n % 2 == 0) even++;
            else odd++;
        }

        if ((even > odd && (even + odd) % 2 == 0) || (odd > even && (even + odd) % 2 == 1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}

