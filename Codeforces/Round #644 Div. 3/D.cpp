#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define ll long long
#define F0R(i,a) for(int i=0;i<a;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		if(k>=n){
			cout<<1<<endl;
			continue;
		}else{
			
			int ans=n;

			for(int i=1;(i*i)<n;i++){
				if(n%i==0){
					ans=min(ans,n/i);
					if(n/i<=k){
						ans=min(ans,i);
					}
				}
			}
			cout<<ans<<endl;
		}
		
	}
}
