#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Point {
    double x, y;
};

double distance(Point& A, Point& B) {
    double dx = B.x - A.x;
    double dy = B.y - A.y;
    return sqrt(dx * dx + dy * dy);
}

void input (Point& p){
	cin>>p.x>>p.y;
}

int main() {
    int T;
    cin >> T;
	struct Point A,B;
    while (T--) {
        input(A);
        input(B);
        cout << fixed << setprecision(4) << distance(A, B) << endl;
    }


}

