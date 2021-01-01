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
	while(t--){
		int n;
		cin>>n;
		vector<int> bruh;
		F0R(i,n){
			int a;
			cin>>a;
			bruh.pb(a);
		}
		int misOdd=0;
		int misEv=0;
		FOR(i,0,n){
			if(i%2!=bruh[i]%2){
				if(bruh[i]%2==1){
					misOdd++;
				}else{
					misEv++;
				}
			}
		}
		if(misOdd!=misEv){
			cout<<-1<<endl;
			continue;
		}
		cout<<misOdd<<endl;
	}
}
