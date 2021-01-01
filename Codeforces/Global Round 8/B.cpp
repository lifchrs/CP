#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define ll long long
#define F0R(i,a) for(ll i=0;i<a;i++)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
int INF=0x3f3f3f3f;
ll MOD=1000000007;
 
ll binpow(ll a,ll b){
	ll res=1;
	while(b>0){
		if(b & 1){
			res*=a;
		}
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
	ll n;
	cin>>n;
	vector<string> chars;
	chars.pb("");
	chars.pb("");
	chars.pb("");
	chars.pb("");
	chars.pb("");
	chars.pb("");
	chars.pb("");
	chars.pb("");
	chars.pb("");
	chars.pb("");
	ll currSize=1;
	ll bruh=1;
	while(binpow(bruh,10)<=n){
		chars[0]+="c";
		chars[1]+="o";
		chars[2]+="d";
		chars[3]+="e";
		chars[4]+="f";
		chars[5]+="o";
		chars[6]+="r";
		chars[7]+="c";
		chars[8]+="e";
		chars[9]+="s";
		currSize=binpow(bruh,10);
		bruh++;
	}
	
	ll x=currSize;
	//cout<<currSize<<endl;
	F0R(i,n){
		//break;
		if(currSize>=n) break;
		
		chars[i%10]+=chars[i%10][0];
		currSize=currSize*chars[i%10].size()/(chars[i%10].size()-1);
		if(currSize>=n) break;

	}
	for(string a:chars) cout<<a;
	cout<<endl;
	//cout<<chars[0].size()<<endl;
	//cout<<n<<endl;
	//cout<<binpow(10,bruh)<<endl;
}
