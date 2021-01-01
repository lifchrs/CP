#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector <int> a(n);
		bool p[n]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			int x;
			cin>>x;
			p[x-1]=true;
		}
		while(true){
			bool check=false;
			for(int i=0;i<n-1;i++){
				if(a[i]>a[i+1]&&p[i]==true){
					check=true;
					swap(a[i],a[i+1]);
				}
			}
			if(!check){
				break;
			}
		}
		bool check=true;
		for(int i=0;i<n-1;i++){
			if(a[i]>a[i+1]){
				check=false;
			}
		}
		if(check==true){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
			
	}
}
