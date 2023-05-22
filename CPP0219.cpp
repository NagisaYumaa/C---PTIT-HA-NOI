#include<bits/stdc++.h>
using namespace std;
const int MAX =105 ;
int A[MAX][MAX], B[MAX][MAX];
main(){
	int t;
	cin>>t;
	while(t--)
	{
		int N,M;
		cin>>N>>M;
		
		 for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> B[i][j];
                A[i][j] = B[i][j];
            }
        }
		
		for(int i = 0 ; i < N ; i++){
			for(int j=0 ; j < M ; j++){
				if(B[i][j]==1){
					for(int k=0 ; k<N ; k++){
						A[k][j]=1;
					}
					for(int k=0 ; k<M ; k++){
						A[i][k]=1;
					}
				}
			}
		}
		
		//kq
		for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
		
}


