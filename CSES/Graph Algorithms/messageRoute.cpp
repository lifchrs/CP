#include <bits/stdc++.h>
using namespace std;
bool visited[100001];
int last[100001];
vector<int> adjList[100001];
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
	
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			visited[i]=1;
			queue<int> q;
			q.push(i);
			while(!q.empty()>0){
				int node=q.front();
				q.pop();
				for(int j=0;j<adjList[node].size();j++){
					int next=adjList[node][j];
					if(!visited[next]){
						visited[next]=1;
						last[next]=node;
						q.push(next);
					}
				}
			}
		}
	}
	vector<int> route;
	int count=0;
	int current=n;
	for(int i=0;i<100004&&last[current]!=0;i++){
		count++;
		route.push_back(current);
		current=last[current];
	}
	if(count==0||route[route.size()-1]!=1){
		cout<<"IMPOSSIBLE";
	}else{
		cout<<count+1<<endl;
		cout<<"1 ";
		reverse(route.begin(),route.end());
		for(int i:route){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
