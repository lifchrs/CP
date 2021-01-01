#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef double db; 
typedef string str; 
typedef pair<ll,ll> pl; 
typedef vector<ll> vl; 
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define nn <<"\n"
#define F0R(i,a) for(ll i=0;i<a;i++)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
int INF=0x3f3f3f3f;
ll MOD=1000000007;

ll binpow(ll a,ll b, ll c=1e18){
	ll res=1;
	while(b>0){
		if(b & 1){
			res*=a;
			res%=c;
		}
		a*=a;
		a%=c;
		b>>=1;
	}
	return res;
}
ll countOdd(ll start){
	ll count=0;
	for(ll i=1;i*i<start;i++){
		if(start%i==0) count++;
	}
	return count;
}
bool prime(ll n){ 
	//cout<<"u "; 
	ll count=0;
	for(ll i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;

}  
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	int t;
	cin>>t;
	string f="FastestFinger\n";
	string a="Ashishgup\n";
	while(t--){
		ll n;
		cin>>n;
		if(n==1){ //yep
			cout<<f;
			continue;
		}
		if(n==2){ //yep
			cout<<a;
			continue;
		}
		if(n%2==1){  //yep
			cout<<a;
			continue;
		}
		if(n%2==0){
			//SOLVE
			//cases
			//2*composite
			//2^n
			//2^x*comp/prime
			//(1<<__builtin_ctz(n)))
			if(n/(1<<__builtin_ctz(n))==1){ //2^n
				//cout<<"1";
				cout<<f;
				continue;
			}
			if((1<<__builtin_ctz(n))==2){ //if 2 is the greatest factor
				if(!prime(n/(1<<__builtin_ctz(n)))){ //if the number of primes, not including 2, are greater than1
					cout<<a;
				}else{
					//cout<<"3";
					cout<<f;
				}
				continue;
			}
			cout<<a;
			continue;

		}
	}
}

