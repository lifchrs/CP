#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define ll long long
#define F0R(i,a) for(int i=0;i<a;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)
ll binpow(ll a,ll b){
	ll res=1;
	while(b>0){
		if(b & 1)
			res*=a;
		a*=a;
		b>>=1;
	}
	return res;
}
	int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(b>a){
			swap(a,b);
		}
		int c=a;
		int d=b;
		a-=2*(c-d);
		b-=(c-d);
		if(a<0||a%3!=0){
			cout<<"NO\n";
			continue;
		}
		cout<<"YES\n";
	}
}
