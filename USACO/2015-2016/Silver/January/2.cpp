#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define ll long long
#define F0R(i,a) for(int i=0;i<a;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)
int firsts[7];
bool found[7];
int maxs[7];
bool foundm[7];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ifstream cin("div7.in");
	ofstream cout("div7.out");
	vector<int> pref;
	int n;
	cin>>n;
	int last=0;
	F0R(x,n){
		int a;
		cin>>a;
		last=last+a%7;
		last%=7;
		pref.pb(last);
	}
	FOR(i,0,pref.size()){
		if(!found[pref[i]]){
			found[pref[i]]=1;
			firsts[pref[i]]=i;
		}
		if(found[0]&&found[1]&&found[2]&&found[3]&&found[4]&&found[5]&&found[6]) break;
	}
	for(int i=pref.size()-1;i>=0;i--){
		if(!foundm[pref[i]]){
			foundm[pref[i]]=1;
			maxs[pref[i]]=i;
		}
		if(foundm[0]&&foundm[1]&&foundm[2]&&foundm[3]&&foundm[4]&&foundm[5]&&foundm[6]) break;
	}
	int maxi=0;
	F0R(i,7){
		maxi=max(maxi,maxs[i]-firsts[i]);
	}
	cout<<maxi<<endl;
}
