#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[100001];
bool curr[100001];
bool goal[100001];
bool visited[100001];
int counts=0;
vector<int> ans;
void dfs(int node,bool current, bool next){
	visited[node]=1;
	if(current){
		curr[node]=!curr[node];
	}
	bool newnext=current;
	if(curr[node]!=goal[node]){
		counts++;
		ans.push_back(node);
		newnext=!current;
	}
	for(int i:adjList[node]){
		if(!visited[i]){
			dfs(i,next,newnext);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	//cout<<n<<endl;
	for(int i=0;i<n-1;i++){ 
		int a,b;
		cin>>a>>b;
		//cout<<a<<" "<<b<<endl;
		adjList[b].push_back(a);
		adjList[a].push_back(b);
	}
	//cout<<"next"<<endl;
	for(int i=0;i<n;i++){
		cin>>curr[i+1];
		//cout<<curr[i+1]<<endl;
	}
	for(int i=0;i<n;i++){
		cin>>goal[i+1];
	}
	dfs(1,0,0);
	cout<<counts<<"\n";
	for(int i:ans) cout<<i<<endl;
}
/**
 * go from the highest to lowest node
 **/
