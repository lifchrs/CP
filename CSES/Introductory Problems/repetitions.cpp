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
	int ans=-1;
	int count=0;
	string b;
	cin>>b;
	char last=b[0];
	for(char a:b){
		if(a==last){
			count++;
		}else{
			ans=max(ans,count);
			count=1;
			last=a;
		}
		//cout<<count<<endl;
	}
	ans=max(ans,count);
	cout<<ans<<endl;
}
