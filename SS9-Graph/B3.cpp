#include<bits/stdc++.h>
using namespace std;

bool dfs(int n,int parent,vector<int> adj[],vector<bool>& check){
	check[n]=true;
	for(int x:adj[n]){
		if(!check[x]){
			if(dfs(x,n,adj,check)){
				return true;
			}
		}else if(x!= parent){
			return true;
		}
	}
	return false;
}
bool dfsCoHuong(int n,vector<int>& mark,vector<int> adj[]){
	//danh dau dinh dang duyet la 1
	mark[n]=1;
	for(int x:adj[n]){
		if(mark[x]==1){
			return true;
		}else if(mark[x]==0){
		   if(dfsCoHuong(x,mark,adj)){
		   	   return true;
		   }
      	}
	} 
	mark[n]=2;
	return false;
}
int main(){
	int n=4;
	//do thi vo huong
	vector<vector<int>> list={{0,1},{1,2},{2,3},{3,0}};
	vector<int> adj[n];
	vector<bool> check(n,false);
	bool ch=true;
	for(auto x:list){
		adj[x[0]].push_back(x[1]);
		adj[x[1]].push_back(x[0]);
	}
	for(int i=0;i<n;i++){
		if(!check[i]){
			if(dfs(i,-1,adj,check)){
				cout<<"Do thi co chu trinh\n";
				ch=false;
				break;
			}
		}
	}
	if(ch){
		cout<<"DO thi khong co chu trinh\n";
	}
	//do thi co huong
	vector<int> adjList[n];
	bool c=true;
	//danh dau dinh chua duyet la 0
	vector<int> mark(n,0);
	for(auto x:list){
		adjList[x[0]].push_back(x[1]);
	}
	//kiem tra do thi co huong co chu trinh
	for(int i=0;i<n;i++){
		if(mark[i]==0){
			if(dfsCoHuong(i,mark,adj)){
				cout<<"Do thi co chu trinh\n";
				c=false;
				break;
			}
		}
	}
		if(c){
		cout<<"DO thi khong co chu trinh";
	}
}
