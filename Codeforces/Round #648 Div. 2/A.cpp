#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int mat[n][m];
		for(int j=0;j<n;j++){
			for(int k=0;k<m;k++){
				cin>>mat[j][k];
			}
		}
		int numRows=0;
		for(int j=0;j<n;j++){
			bool yes=1;
			for(int k=0;k<m;k++){
				if(mat[j][k]==1){
					yes=0;
				}
			}
			if(yes) numRows++;
		}
		int numCol=0;
		for(int j=0;j<m;j++){
			bool yes=1;
			for(int k=0;k<n;k++){
				if(mat[k][j]==1){
					yes=0;
				}
			}
			if(yes) numCol++;
		}
		int open=min(numCol,numRows);
		//cout<<"rows: "<<numRows<<"cols: "<<numCol<<endl;
		/*for(int j=0;j<n;j++){
			for(int k=0;k<m;k++){
				cout<<mat[j][k]<<" ";
			}
			cout<<endl;
		}*/
		if(open%2==0) cout<<"Vivek\n";
		else cout<<"Ashish\n";
	}
}
