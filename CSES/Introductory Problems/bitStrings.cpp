#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define ll long long
#define F0R(i,a) for(int i=0;i<a;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)
ll MOD=1000000007;
ll binpow(ll a,ll b){
	ll res=1;
	while(b>0){
		if(b & 1)
			res=(res*a)%MOD;
		a*=a;
		a%=MOD;
		b>>=1;
	}
	return res;
}
	int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	int n;
	cin>>n;
	cout<<binpow(2,n)<<endl;
}
