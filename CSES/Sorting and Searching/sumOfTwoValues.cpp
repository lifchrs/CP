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
	int x;
	cin>>x;
	vector<pair<int,int>> nums; //(num,pos)
	F0R(i,n){
		int a;
		cin>>a;
		nums.push_back({a,i+1});
	}
	sort(nums.begin(),nums.end());
	bool done=0;
	int back=n-1;
	for(int i=0;i<n&&i<back;i++){
		if(nums[i].first+nums[back].first==x){
			done=1;
			cout<<nums[i].second<<" "<<nums[back].second<<endl;
			break;
		}
		if(nums[i].first+nums[back].first>x){
			i--;
			back--;
			continue;
		}
	}
	if(!done) cout<<"IMPOSSIBLE"<<endl;
}
