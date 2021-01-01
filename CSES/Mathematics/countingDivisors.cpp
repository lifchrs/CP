#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define ll long long
#define F0R(i,a) for(int i=0;i<a;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)
int INF=0x3f3f3f3f;
ll MOD=1000000007;
ll binpow(ll a,ll b, ll c=1e18){
	ll res=1;
	while(b>0){
		if(b & 1){
			res*=a;
			res%=c;
		}
		a*=a;
		a%=c;
		b>>=1;
	}
	return res;
}
int numDivisors(int a){
	int count=0;
	int i=1;
	for(i=1;i*i<a;i++){
		if(a%i==0) count+=2;
	}
	if((i)*(i)==a) count++;
	return i;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int count=0;
		int a=n;
		int i=1;
		for(i=1;i*i<a;i++){
			if(a%i==0) count+=2;
		}
		if((i)*(i)==a) count++;
		//cout<<"i: "<<i<<endl;
		cout<<count<<endl;
	}
}
