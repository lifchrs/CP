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
	ll n;
	cin>>n;
	cout<<n<<" ";
	while(n!=1){
		if(n%2==0){
			n/=2;
		}else{
			n=3*n+1;
		}
		cout<<n<<" ";
	}
	cout<<endl;
}
