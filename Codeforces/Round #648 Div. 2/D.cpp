#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
		int n;
		cin>>n;
		vector<int> a,b;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			a.push_back(x);
		}
		for(int i:a) a.push_back(i);
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			b.push_back(x);
		}
		int maxi=0;
		for(int i=0;i<=n;i++){
			int count=0;
			for(int j=0;j<n;j++){
				if(b[j]==a[i+j]) count++;
			}
			maxi=max(count,maxi);
		}
		cout<<maxi<<"\n";
}
