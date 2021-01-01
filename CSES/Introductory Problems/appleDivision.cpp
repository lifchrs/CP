#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define ll long long
#define F0R(i,a) for(int i=0;i<a;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define int long long
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
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	int n;
	cin>>n;
	int sum=0;
	vector<int> weights;
	F0R(i,n){
		int a;
		cin>>a;
		sum+=a;
		weights.pb(a);
	}
	int mini=sum;
	for(int i=0;i<binpow(2,n);i++){
		string s=bitset<20>(i).to_string();
		vector<bool> yuh;
		for(char bruh:s) yuh.push_back((bruh-48));
		int sums=0;
		for(int j=20-n;j<20;j++){
			if(yuh[j]){sums+=weights[j-20+n]; 
			}
		}
		mini=min(mini,abs(abs(sum-sums)-sums));
	}
	cout<<mini<<endl;
	
}
