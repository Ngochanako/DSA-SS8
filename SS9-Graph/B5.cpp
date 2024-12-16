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
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
	vector<int> dist(n,INT_MAX);
	dist[1]=0;
	q.push({0,1});
	while(!q.empty()){
		int d=q.top().first;
		int u=q.top().second;
		q.pop();
		if(d>dist[u]){
			continue;
		}
		for(auto x:adj[u]){
			if(x.first+dist[u]<dist[x.second]){
				dist[x.second]=x.first+dist[u];
			
				q.push({x.first+dist[u],x.second});
			}
		}
	}
	for(int i=1;i<n;i++){
		if(dist[i]==INT_MAX){
			cout<<"Khong co duong di tu 1 den "<<i<<endl;
		}else{
			cout<<"Duong di ngan nhat tu 1 den "<<i<<"la: "<<dist[i]<<endl;
		}
	}
}
