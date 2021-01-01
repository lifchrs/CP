#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define ll long long
#define F0R(i,a) for(int i=0;i<a;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)
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
int freq[27];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
	string a;
	cin>>a;
	FOR(i,0,27) freq[i]=0;
	for(char x:a){
		freq[x-'A']++;
	}
	int numOdd=0;
	for(int i:freq){
		if(i%2==1) numOdd++;
	}
	if(numOdd>1){
		cout<<"NO SOLUTION\n";
		return 0;
	}
	string first="";
	string alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for(int i=0;i<27;i++){
		if(freq[i]%2==0){
			for(int x=0;x<freq[i]/2;x++) first+=alphabet[i];
		}
	}
	//cout<<first;
	string bruh=first;
	reverse(first.begin(),first.end());
	for(int i=0;i<27;i++){
		if(freq[i]%2==1){
			for(int x=0;x<freq[i];x++) first+=alphabet[i];
		}
	}
	//cout<<"first: "<<first<<endl;
	//cout<<"bruh: "<<bruh<<endl;
	cout<<first+bruh<<endl;
}
