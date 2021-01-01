#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,m;
	cin>>n>>m;
	if(n>m){
		cout<<0<<endl;
	}else{
		vector<long long> vec(n);
		for(long long i=0;i<n;i++){
			cin>>vec[i];
		}
		long long product=1;
		bool done=0;
		for(long long j=0;j<n;j++){
			long long first=vec[j];
			for(long long k=j+1;k<n;k++){
				long long second=vec[k];
				long long current=(long long)(abs(first-second));
				current=current%m;
				product*=current;
				product=product%m;
				if(product==false){
					done=1;
					break;
				}
			}
			if(done==1){
				break;
			}
		}
		cout<<product%m<<endl;
	}
}
