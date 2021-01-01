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
	// ifstream cin("name.in");
	//ofstream cout("name.out");
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		//can have a+ax b or b+b*a 
		int first=max(2*a,b);
		first*=first;
		int second=max(2*b,a);
		second*=second;
		cout<<min(second,first)<<endl;
	}
}
