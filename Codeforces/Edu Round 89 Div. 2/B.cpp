#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define ll long long
#define FOR(i,a,b) for(int i=a;i<b;i++)
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	int t;
	cin>>t;
	while(t--){
		ll n;
		ll x,m;
		cin>>n>>x>>m;
		ll maxi=x,mini=x;
		FOR(i,0,m){
			ll a,b;
			cin>>a>>b;
			if((maxi>=a&&maxi<=b)){maxi=b;}
			
			if(mini<=b&&mini>=a){mini=a;}
		}
		cout<<maxi-mini+1<<endl;
		
	}
}
