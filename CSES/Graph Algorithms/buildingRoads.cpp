#include <bits/stdc++.h>
using namespace std;
bool visited[100002];
vector<vector<int>> adjList(100002);
void dfs(int node){
	visited[node]=1;
	for(int i:adjList[node]){
		if(!visited[i]){
			dfs(i);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		adjList[a].push_back(b);
		adjList[b].push_back(a);
	}
	int connectedcomps=0;
	vector<int> cities;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			cities.push_back(i);
			connectedcomps++;
			dfs(i);
		}
	}
	cout<<connectedcomps-1<<endl;
	for(int i=0;i<cities.size()-1;i++){
		cout<<cities[i]<<" "<<cities[i+1]<<endl;
	}
	
}

