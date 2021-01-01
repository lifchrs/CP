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
	ll n;
	cin>>n;
	ll numfives=0;
	ll fiven=n;
	for(ll i=(ll)(log(n)/log(5));i>0;i--){
		//cout<<"i: "<<i<<endl;
		numfives+=(fiven/binpow(5,i));
		//cout<<"num: "<<numfives<<endl;
	}
	cout<<numfives<<endl;
}
