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
	int t;
	cin>>t;
	cout<<endl;
	while(t--){
		ll ans=-10;
		ll x,y;
		cin>>x>>y;
		if(x>=y){
			if(x%(ll)(2)==0){
				ans=(ll)(x*x-y+1);
			}else{
				ans=(ll)((x-1)*(x-1)+y);
			}
		}else{
			if(y%(ll)(2)==1){
				ans=(ll)(y*y-x+1);
			}else{
				ans=(ll)((y-1)*(y-1)+x);
			}
		}
		cout<<ans<<endl;
	}
}
