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
	int n;
	cin>>n;
	vector<pair<int,bool>> stuff;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		stuff.pb({a,1});
		stuff.pb({b,0});
	}	
	sort(stuff.begin(),stuff.end());
	int ma=0;
	int count=0;
	for(pair<int,bool> x:stuff){
		if(x.second) count++;
		else count--;
		ma=max(ma,count);
	}
	cout<<ma<<endl;
}
