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
	int n,m;
	cin>>n>>m;
	multiset<int> prices;
	for(int i=0;i<n;i++){
		int a; cin>>a;
		prices.insert(a);
	}
	vector<int> customers;
	for(int i=0;i<m;i++){
		int a;
		cin>>a;
		auto it=prices.upper_bound(a);
		
		if(it==prices.begin()){
			cout<<-1<<"\n";
		}else{
			it--;
			cout<<*it<<"\n";
			prices.erase(it);
		}
	}
}
