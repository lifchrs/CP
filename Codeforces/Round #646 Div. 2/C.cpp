#include <bits/stdc++.h>
int visited[1000];
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		memset(visited,0,sizeof visited);
		vector<int> adjList[1001];
		int n,x;
		cin>>n>>x;
		for(int i=0;i<n-1;i++){
			int a,b;
			cin>>a>>b;
			adjList[a].push_back(b);
			adjList[b].push_back(a);
		}
		int degree[1001];
		for(int i=1;i<n+1;i++){
			degree[i]=adjList[i].size();
		}
		if(degree[x]<=1){ 
			cout<<"Ayush\n";
			continue;
		}
		if(n%2==0){
			cout<<"Ayush\n";
		}else{
			cout<<"Ashish\n";
		}
	}
} 
