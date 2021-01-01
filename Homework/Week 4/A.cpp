#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[2001];
bool visited[2001];
int depth[2001];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		if(a==-1)a=0;
		adjList[i].push_back(a);
		adjList[a].push_back(i);
	}
	stack<int> list;
	list.push(0);
	int count=0;
	visited[0]=1;
	while(!list.empty()){
		int curr=list.top();
		list.pop();
		for(int a:adjList[curr]){
			if(!visited[a]){
				visited[a]=1;
				depth[a]=depth[curr]+1;
				list.push(a);
			}
		}
	}
	int maximum=0;
	for(int i:depth) maximum=max(i,maximum);
	cout<<maximum<<endl;
}
