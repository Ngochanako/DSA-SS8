#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=4;
	//do thi vo huong
	vector<vector<int>> list={{0,1},{1,2},{2,3},{3,0}};
	vector<int> adj[n];
	vector<bool> check(n,false);
	for(auto x:list){
		adj[x[0]].push_back(x[1]);
		adj[x[1]].push_back(x[0]);
	}
	// su dung hang doi
	queue<int> q;
	q.push(0);
	check[0]=true;
	while(!q.empty()){
		int v=q.front();
		cout<<v<<" ";
		q.pop();
		for(int x:adj[v]){
			if(!check[x]){
				q.push(x);
				check[x]=true;
			}
		}
	}
}
