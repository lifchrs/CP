#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		if(k<n){
			cout<<k<<endl;
		}else{
			long long first=((k)/(n-1))*n;
			long long second=k%((k/(n-1))*(n-1));
			if(k%(n-1)==0) first--;
			cout<<first+second<<endl;
		}
	}
}
