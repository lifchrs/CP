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
	int n,x;
	cin>>n>>x;
	vector<int> nums;
	F0R(i,n){
		int a;
		cin>>a;
		nums.pb(a);
	}
	sort(nums.begin(),nums.end());
	int j=n-1;
	int ans=0;
	for(int i=0;i<j&&i<n&&j>0;i++){
		if(nums[i]+nums[j]<=x){
			ans++;
			j--;
			continue;
		}
		if(nums[i]+nums[j]>x){
			j--;
			i--;
			continue;
		}
	}
	cout<<n-ans<<endl;
}
