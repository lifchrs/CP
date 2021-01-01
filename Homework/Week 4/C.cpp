#include <bits/stdc++.h>
#define pb push_back
using namespace std;
long long gold[100001];
vector<int> adjList[100001];
bool visited[100001];
vector <int> monies;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		long long a;
		cin>>a;
		gold[i+1]=a;
	}
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adjList[x].pb(y);
		adjList[y].pb(x);
	}
	long long sum=0;
	queue<int> q;
	for(int x=1;x<=n;x++){
		if(!visited[x]){
			q.push(x);
			long long mini=gold[x];
			while(!q.empty()){
				int current=q.front();
				q.pop();
				for(int i:adjList[current]){
					if(!visited[i]){
						mini=min((long long)(mini),(gold[i]));
						visited[i]=1;
						q.push(i);
					}
				}
			}
			sum+=mini;
		}
	}
	cout<<sum<<endl;
}
/**
 * count number of ccs and store each find lowest cost in each cc
 **/
 
