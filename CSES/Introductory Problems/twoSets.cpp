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
	//cout<<"yuh\n";
	ll n;
	cin>>n;
	if((n*(n+1))%4!=0){
		cout<<"NO\n";
		return 0;
	}
	cout<<"YES\n";
	ll half=n*(n+1)/4;
	vector<ll> tops;
	ll current=n;
	ll sum=half;
	while(sum>0){
		if(sum>current){
			sum-=current;
			tops.pb(current);
			current--;
		}else{
			tops.pb(sum);
			sum=0;
		}
	}
	cout<<tops.size()<<endl;
	for(ll i:tops) cout<<i<<" ";
	cout<<endl;
	cout<<n-tops.size()<<endl;
	reverse(tops.begin(),tops.end());
	int index=0;
	for(ll i=1;i<=n;i++){
		if(i==tops[index]){
			index++;
			continue;
		}
		cout<<i<<" ";
	}
}
