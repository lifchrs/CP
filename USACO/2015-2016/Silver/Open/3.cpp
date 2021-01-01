#include <bits/stdc++.h>
using namespace std;
#define PB push_back;
bool visited[3001];
vector<int> nodes;
vector <int> connections[3001];
bool bad[3000];

void dfs(int node){
	visited[node]=true;
	for(int i:connections[node]){
		if(!visited[i]&&!bad[i]){
			dfs(i);
		}
	}
}
int main(){
	freopen("closing.in", "r", stdin);
	freopen("closing.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		nodes.push_back(i+1);
	}
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		connections[a].push_back(b);
		connections[b].push_back(a);
	}
	int op;
	vector<int> tempbad;
	tempbad.push_back(0);
	for(int i=1;i<n;i++){
		cin>>op;
		tempbad.push_back(op);
	}
	cin>>op;
	bool check=1;
	if(!visited[op]&&check){
		dfs(op);
	}
	bool answers=1;
	for(int x:nodes){
		if(!visited[x]){
			answers=0;
		}
	}
	if(!answers){
		cout<<"NO\n";
	}else{
		cout<<"YES\n";
	}
	for(int i=1;i<n;i++){
		memset(visited,0,sizeof(visited));
		int a=tempbad[i];
		bad[a]=1;
		bool check=1;
		if(!visited[op]&&check){
			dfs(op);
		}
		vector<int> newn;
		for(int m=0;m<nodes.size();m++){
			if(nodes[m]!=a){
				newn.push_back(nodes[m]);
			}
		}
		
		nodes=newn;
		bool answer=1;
		for(int x:nodes){
			if(!visited[x]){
				answer=0;
			}
		}
		if(!answer){
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
		}
	}
}

