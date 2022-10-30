/*
	Program for (2*2) Matrix Multiplication by Strassen Method
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<vector<int>> A = {
	    {1,2},
	    {2,1}
	};
	vector<vector<int>> B = {
	    {1,2},
	    {2,1}
	};

	//(2*2) Matrix Multiplication by Strassen Method
	
	//Calculation by Strassen Formulae

	int P = (A[0][0]+A[1][1]) * (B[0][0]+B[1][1]);
	int Q = (A[1][0]+A[1][1]) * B[0][0];
	int R = A[0][0] * (B[0][1]-B[1][1]);
	int S = A[1][1] * (B[1][0]-B[0][0]);
	int T = (A[0][0]+A[0][1]) * B[1][1];
	int U = (A[1][0]-A[0][0]) * (B[0][0]+B[0][1]);
	int V = (A[0][1]-A[1][1]) * (B[1][0]+B[1][1]);

	int C_11 = P+S-T+V;
	int C_12 = R+T;
	int C_21 = Q+S;
	int C_22 = P+R-Q+U;

	// Storing result in vector C
	vector<vector<int>> C = { {C_11,C_12} , {C_21,C_22} };

	// Displaying result

	for(int i=0;i<C.size();i++){
		for(int j=0;j<C[i].size();j++){
			cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}

/*OUTPUT OF PROGRAM

	5 4 
	4 5 

*/