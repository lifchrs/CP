#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long num;
		if(a==b){
			cout<<0<<endl;
			continue;
		}
		if(a>b){
			num=(log2(a/b));
			if(a/b!=ceil(a/b)){
				cout<<-1<<endl;
				continue;	
			}
		}else{
			num=log2(b/a);
			if(a/b!=ceil(a/b)){
				cout<<-1<<endl;
				continue;	
			}
		}
		
		long long threes=num/3;
		long long afterthrees=num%3;
		long long twos=afterthrees/2;
		long long aftertwos=afterthrees%2;
		long long ones=aftertwos;
		long long ans=threes+twos+ones;
		cout<<ans<<endl;
	}
}
