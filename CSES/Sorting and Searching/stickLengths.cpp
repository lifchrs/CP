#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define ll long long
#define double long double
#define F0R(i,a) for(int i=0;i<a;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)
int INF=0x3f3f3f3f;
ll MOD=1000000007;

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
	int n;
	cin>>n;
	vector<double> yuh;
	double sum=0;
	yuh.pb(-10000000);
	F0R(i,n){
		double a;
		cin>>a;
		sum+=a;
		yuh.pb(a);
	}
	sort(yuh.begin(),yuh.end());
	double goal;
	if(n%2==1){
		goal=(double)(yuh[n/2+1]);
	}else{
		goal=(double)(yuh[n/2])/2+(double)(yuh[n/2+1])/2;
	}
	//cout<<goal;
	yuh[0]=goal;
	//for(int i:yuh) cout<<" "<<i;
	//cout<<endl;
	double ans=0;
	for(double i:yuh){
		ans+=abs(i-goal);
	}
	cout<<(ll)(ans)<<endl;
	//cout<<"goal: "<<goal<<endl;		
}
