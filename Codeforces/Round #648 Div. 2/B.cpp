#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>a,b;
		for(int i=0;i<n;i++){
			int z;
			cin>>z;
			a.push_back(z);
		}
		vector<int>c=a;
		sort(c.begin(),c.end());
		bool check=1;
		for(int i=0;i<n;i++){
			if(a[i]!=c[i]){
				check=0;
			}
		}
		if(check){
			cout<<"Yes\n";
		}
		bool z=0;
		bool o=0;
		for(int i=0;i<n;i++){
			int yuh;
			cin>>yuh;
			if(yuh==0) z=1;
			else o=1;
		}
		if(check) continue;
		if(z&&o){
			cout<<"Yes\n";
		}else{
			cout<<"No\n";
		}
	}
}
