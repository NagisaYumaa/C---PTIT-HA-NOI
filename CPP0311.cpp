#include <iostream>
#include <string>
#include <unordered_map>

bool canArrangeCharacters(const std::string& str) {
    std::unordered_map<char, int> charCount;
    int n = str.length();

    for (char c : str) {
        charCount[c]++;
    }

    for (const auto& pair : charCount) {
        if (pair.second > n / 2) {
            return false;
        }
    }

    return true;
}

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        std::string S;
        std::cin >> S;

        if (canArrangeCharacters(S)) {
            std::cout << "1\n";
        } else {
            std::cout << "0\n";
        }
    }

    return 0;
}

