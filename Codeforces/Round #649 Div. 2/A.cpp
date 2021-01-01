#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define ll long long
#define F0R(i,a) for(ll i=0;i<a;i++)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin>>t;
	//cout<<0%3;
	while(t--){
		ll n,x;
		cin>>n>>x;
		ll sum=0;
		vector<ll> mods;
		bool can=0;
		for(ll i=0;i<n;i++){
			ll a;
			cin>>a;
			if(a%x!=0)can=1;
			sum+=a%x;
			sum=sum%x;
			mods.pb(a%x);
		}
		ll maxi=0;
		if(sum%x!=0){
			cout<<n<<endl;
			continue;
		}else{
			if(!can){ cout<<-1<<endl; continue;}

			for(int i=0;i<n;i++){
				//n-1-1
				if(mods[i]!=0){maxi=max(maxi,n-i-1);}
				
			}
			reverse(mods.begin(),mods.end());
			for(int i=0;i<n;i++){
				//n-1-1
				if(mods[i]!=0){maxi=max(maxi,n-i-1);}
				
			}
		}
		cout<<maxi<<endl;
	}
}
