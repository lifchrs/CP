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
	int t;
	cin>>t;
	//space bet+1 divided by k;
	while(t--){
		int n,k;
		cin>>n>>k;
		string a;
		cin>>a;
		int count=0;
		string add="";
		for(int i=0;i<k;i++){
			add+="0";
		}
		add+="1";		
		a+=add;
		reverse(add.begin(),add.end());
		a=add+a;
		int ans=0;
		for(int i=0;i<a.size();i++){
			if(a[i]=='0') {
				count++;
			}
			if(a[i]=='1'){
				ans+=count/(2*k+1);
				count=0;
			}
		}
		cout<<ans<<endl;
	}
}
