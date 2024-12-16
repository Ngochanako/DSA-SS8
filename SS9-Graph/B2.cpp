#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=4;
	int matrix[n][n];
	memset(matrix,0,sizeof(matrix));
	vector<vector<int>> list = {{0, 1}, {0, 2}, {1, 2}, {1, 3}}; 
	vector<int> adj[n];
	//ma tran ke
	for(auto x:list){
		matrix[x[0]][x[1]]=1;
		matrix[x[1]][x[0]]=1;
	}
	//in ma tran ke
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
