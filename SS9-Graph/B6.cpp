#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<vector<int>> list={{1,2,3},{2,4,1},{4,3,2},{3,2,4},{2,5,1},{1,5,5}};
	int n=6;
	vector<pair<int,int>> adj[n];
	for(auto x:list){
		adj[x[0]].push_back({x[2],x[1]});
		adj[x[1]].push_back({x[2],x[0]});
	}
	for(int i=1;i<n;i++){
	     cout<<"So bac cua dinh" <<i<<"la: "<<adj[i].size()<<endl;
	}
}
