#include <iostream>
#include <sstream>
#include <set>
using namespace std;

set<string> layTuDuyNhat(const string& str) {
    set<string> tuDuyNhat;
    istringstream iss(str);

    string tu;
    while (iss >> tu) {
        tuDuyNhat.insert(tu);
    }

    return tuDuyNhat;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); 

    while (T--) {
        string S1, S2;
        getline(cin, S1);
        getline(cin, S2);

        set<string> tuS1 = layTuDuyNhat(S1);
        set<string> tuS2 = layTuDuyNhat(S2);

        for (const string& tu : tuS1) {
            if (tuS2.find(tu) == tuS2.end()) {
                cout << tu << " ";
            }
        }

        cout << endl;
    }

    return 0;
}

