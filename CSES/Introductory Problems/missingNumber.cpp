#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define ll long long
#define F0R(i,a) for(int i=0;i<a;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)
bool freq[200001];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	int n;
	cin>>n;
	FOR(i,1,n){
		int a;
		cin>>a;
		freq[a]=1;
	}
	int ans=-1;
	for(int i=1;i<n+10;i++){
		if(!freq[i]){
			ans=i;
			break;
		}
	}
	cout<<ans<<endl;
}
