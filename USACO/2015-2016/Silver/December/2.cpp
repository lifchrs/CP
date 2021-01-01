#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define ll long long
#define F0R(i,a) for(int i=0;i<a;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)
bool elsie[100001];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ifstream cin("highcard.in");
	ofstream cout("highcard.out");
	int n;
	cin>>n;
	vector<bool> shortened;
	F0R(i,n){
		int a;
		cin>>a;
		elsie[a-1]=1;
	}
	int elsCount=0;
	int answer=0;
	F0R(i,2*n){
		//cout<<i<<" ";
		if(elsie[i]) elsCount++;
		if(elsCount>0&&!elsie[i]){
			elsCount--;
			answer++;
		}
	}
	//cout<<endl;
	cout<<answer<<endl;
	//for(auto i:shortened) cout<<i<<" ";
	//cout<<endl;
}
