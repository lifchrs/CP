#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		long double a,b;
		cin>>a>>b;
		if(b==a){
			cout<<0<<endl;
			continue;
		}
		int ans=0;
		if(a>b){
			while(a>b){
				a=a/2;
				ans++;
			}
		}
		if(b>a){
			while(b>a){
				b=b/2;
				ans++;
			}
			
		}
		int num=ans;
		long long threes=num/3;
		long long afterthrees=num%3;
		long long twos=afterthrees/2;
		long long aftertwos=afterthrees%2;
		long long ones=aftertwos;
		long long yiuh=threes+twos+ones;
		if(a!=b){
			cout<<-1<<endl;
		}else cout<<yiuh<<endl;
	}
}
