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
	int n;
	cin>>n;
	ll last;
	cin>>last;
	ll sum=0;
	F0R(i,n-1){
		ll next;
		cin>>next;
		if(next<last){
			sum+=last-next;
		}
		last=max(last,next);
	}
	cout<<sum<<endl;
}
