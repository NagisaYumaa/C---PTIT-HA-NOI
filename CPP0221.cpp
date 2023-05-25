#include <iostream>
using namespace std;

void quayMaTran(int A[][100], int n, int m) {
    int rowStart = 0, rowEnd = n - 1;
    int colStart = 0, colEnd = m - 1;

    while (rowStart <= rowEnd && colStart <= colEnd) {
        
        int temp = A[rowStart][colStart];

        
        for (int i = colStart + 1; i <= colEnd; i++) {
            A[rowStart][i - 1] = A[rowStart][i];
        }

        
        for (int i = rowStart + 1; i <= rowEnd; i++) {
            A[i - 1][colEnd] = A[i][colEnd];
        }

        
        for (int i = colEnd - 1; i >= colStart; i--) {
            A[rowEnd][i + 1] = A[rowEnd][i];
        }

     
        for (int i = rowEnd - 1; i >= rowStart + 1; i--) {
            A[i + 1][colStart] = A[i][colStart];
        }

        A[rowStart + 1][colStart] = temp;

        
        rowStart++;
        rowEnd--;
        colStart++;
        colEnd--;
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;

        int A[100][100];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> A[i][j];
            }
        }

        quayMaTran(A, n, m);


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

