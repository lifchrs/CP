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
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> desired;
	F0R(i,n){
		int a;
		cin>>a;
		desired.pb(a);
	}
	vector<int> sizes;
	F0R(i,m){
		int a;
		cin>>a;
		sizes.pb(a);
	}
	sort(sizes.begin(),sizes.end());
	sort(desired.begin(),desired.end());
	int sizeIndex=0;
	int ans=0;
	for(int i=0;i<n&&sizeIndex<m;i++){
		if(abs(desired[i]-sizes[sizeIndex])<=k){
			ans++;
			sizeIndex++;
			continue;
		}else{
			if(desired[i]-sizes[sizeIndex]>k){
				sizeIndex++;
				i--;
				continue;
			}
			else{
				if(sizes[sizeIndex]-desired[i]>k){
					continue;
				}
			}
		}
	}
	cout<<ans<<endl;
}
