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
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	int t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		ll bruh=0;
		if(a>b){
			ll c=a;
			a-=min(c-b,b)*2;
			bruh+=min((c-b),b);
			b-=min(c-b,b);
		}
		else if(b>a){
			ll d=b;
			b-=min(d-a,a)*2;
			bruh+=min((d-a),a);
			a-=min((d-a),a);
		}
	
		if(a==b){
			bruh+=2*floor(a/3);
			a=a%3;
			b=b%3;
			if(a>1&&b>1){
				bruh+=1;
			}
		}
		cout<<bruh<<endl;
	}
}
