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
	ifstream cin("moobuzz.in");
	ofstream cout("moobuzz.out");
	ll n;
	cin>>n;
	//FOR(n,1,10){
		ll mult7=n-n%8;
		ll minx=mult7/8*15;
		if(n%8==0){
			cout<<minx-1<<endl;
		//	continue;
			return 0;
		}
		while(n-mult7!=0){
			minx++;
			if(minx%3!=0&&minx%5!=0){
				mult7++;
			}
		}
		cout<<minx<<endl;
	//}
}
