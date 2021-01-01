#include <bits/stdc++.h>
using namespace std;
#define se second
#define pb push_back
#define pf push_front
#define ll long long
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m,x,y;
		int black=0,white=0;
		cin>>n>>m>>x>>y;
		char mat[n+1][m+1];
		for(int j=1;j<=n;j++){
			for(int k=1;k<=m;k++){
				char a;
				cin>>a;
				mat[j][k]=a;
				if(a=='*'){
					black++;
				}else{
					white++;
				}
			}
		}
		bool use2=0;
		if(y<2*x){
			use2=1;
		}
		
		int twos=0;
		for(int i=1;i<=n;i++){
			char last='*'; 
			for(int j=1;j<=m;j++){
				if(mat[i][j]==last&&last=='.'){
					twos++;
					last='*';
				}else{
					last=mat[i][j];
				}
			}
		}
		int ones=white-2*twos;
		int price=0;
		if(use2){
			price=y*twos+x*ones;
		}else{
			price=white*x;
		}
		cout<<price<<endl;
		//cout<<"twos: "<<twos<<endl;
	}
}
