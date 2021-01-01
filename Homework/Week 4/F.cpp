#include <bits/stdc++.h>
using namespace std;
bool adjMat[101][101];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		adjMat[a][b]=1;
		adjMat[b][a]=1;
	}
	bool done=0;
	int fcou=0;
	while(!done){
		done=1;
		vector<int> bad;
		for(int row=1;row<n+1;row++){
			int cou=0; //count
			for(int col=1;col<n+1;col++){
				if(adjMat[row][col]){
					cou++;
				}
				
			}
			if(cou==1){
				done=0;
				bad.push_back(row);
			}
		}
		if(bad.size()>0){
				fcou++;//final count (answer)
			}
		for(int j:bad){
			for(int i=1;i<n+1;i++){
				adjMat[j][i]=0;
				adjMat[i][j]=0;
			}
		}
		
	}
	cout<<fcou<<endl;
}
