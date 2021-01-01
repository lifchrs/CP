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
	ifstream cin("lemonade.in");
	ofstream cout("lemonade.out");
	ll n;
	cin>>n;
	vector<ll> waits;
	FOR(i,0,n){
		int a;
		cin>>a;
		waits.pb(a);
	}
	sort(waits.begin(),waits.end());
	vector<ll> rev=waits;
	reverse(waits.begin(),waits.end());
	//for(ll i:waits) cout<<i<<" ";
	//cout<<endl;
	//for(ll i:rev) cout<<i<<" ";
	//cout<<endl;
	vector<ll> q;
	bool done=0;
	FOR(i,0,n){
		if(waits[i]>=q.size()){
			q.pb(waits[i]);
		}else{
			break;	
		}
	}
	cout<<q.size()<<endl;
}
