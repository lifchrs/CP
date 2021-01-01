#include <bits/stdc++.h>
using namespace std;
#define se second
#define pb push_back
#define pf push_front
#define ll long long
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int winner;
		int max=0;
		if((n/k)>m){
			winner=m;
		}else{
			winner=n/k;
			int rem=m-(n/k);
			if(rem%(k-1)==0){
				max=rem/(k-1);
			}else{
				max=rem/(k-1)+1;
			}
		}
		cout<<winner-max<<endl;
		
	}	
}
