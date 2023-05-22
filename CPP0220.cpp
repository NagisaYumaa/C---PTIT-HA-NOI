#include<bits/stdc++.h>
using namespace std;
const int MAX =155 ;
int A[MAX][MAX], B[MAX][MAX];
main(){
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		
		 for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> B[i][j];
                A[i][j] = B[i][j];
            }
        }
		
		for(int i = 0 ; i< N ; i++){
			for(int j = 0 ; j<N ; j++ ){
				if(i==0|| j ==0 || i == N-1 || j == N-1){
					cout<<B[i][j]<<" ";
				}
				else{
					cout<<" "<<" ";
				}
			}
			cout<<endl;
		}
		
		//kq
//		for (int i = 0; i < N; i++) {
//            for (int j = 0; j < M; j++) {
//                cout << A[i][j] << " ";
//            }
//            cout << endl;
//        }
    }
		
}


