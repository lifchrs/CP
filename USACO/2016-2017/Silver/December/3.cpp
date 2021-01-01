#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[201];
bool visited[201];
bool check(vector<int> a,vector<int> b,int greatest){
	int greatestPow=max(a[2],b[2]);
	double dist=sqrt((a[0]-b[0])*(a[0]-b[0])+(a[1]-b[1])*(a[1]-b[1]));
	//cout<<dist<<endl;
	if(dist<=double(greatest)){
		return 1;
	}else{
		return 0;
	}
}
int numcount;
void dfs(int node){
	visited[node]=1;
	numcount++;
	for(int i:adjList[node]){
		if(!visited[i]){
			dfs(i);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ifstream cin("moocast.in");
	ofstream cout("moocast.out");
	int n;
	cin>>n;
	vector<vector<int>> coords;
	coords.push_back({});
	for(int i=0;i<n;i++){
		int a,b,c;
		cin>>a>>b>>c;
		vector<int> ret;
		ret.push_back(a);
		ret.push_back(b);
		ret.push_back(c);
		coords.push_back(ret);
	}
	//if(check({0,0,2},{0,2,1})) cout<<"hi"<<endl;
	for(int i=1;i<n+1;i++){
		for(int j=i;j<n+1;j++){
			if(check(coords[i],coords[j],coords[i][2])){
				adjList[i].push_back(j);
			}
			if(check(coords[i],coords[j],coords[j][2])){
				adjList[j].push_back(i);
			}
		}
	}
	vector<int> anss;
	for(int i=1;i<n+1;i++){
		memset(visited,0,sizeof visited);
		numcount=0;
		if(!visited[i]){
			dfs(i);
		}
		anss.push_back(numcount);
		
	}
	int maxi=0;
	for(int i:anss) maxi=max(maxi,i);
	cout<<maxi<<endl;
}
