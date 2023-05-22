#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isSphenic(int n) {
    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i) && n % i == 0) {
            primes.push_back(i);
        }
    }
    if (primes.size() != 3) return false;
    if (primes[0] * primes[1] * primes[2] != n) return false;
    return true;
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << isSphenic(n) << endl;
    }
    return 0;
}
