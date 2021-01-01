#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t-->0){
		int n;
		cin>>n;
		set<int> list;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			list.insert(a);
		}
		cout<<list.size()<<"\n";
	}
}
