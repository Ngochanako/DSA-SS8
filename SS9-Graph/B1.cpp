#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=4;
	int matrix[n][n]={0};
	vector<vector<int>> list = {{0, 1}, {0, 2}, {1, 2}, {1, 3}}; 
	vector<int> adj[n];
	//ma tran ke
	for(auto x:list){
		matrix[x[0]][x[1]]=1;
	}
	//danh sach ke
		for(auto x:list){
		adj[x[0]].push_back(x[1]);
		adj[x[1]].push_back(x[0]);
	}
	//in ma tran ke
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	//in danh sach ke
	for(int i=0;i<n;i++){
		cout<<endl;
		cout<<i<<": ";
		for(int x:adj[i]){
			cout<<x<<" ";
		}
	}
	
}
