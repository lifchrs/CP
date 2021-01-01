#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		vector <long long> array;
		for(long long z=0;z<n;z++){
			long long a;
			cin>>a;
			array.push_back(a);
		}
		long long nmax=0;
		long long nmin=-10e10-1;
		long long sum=0;
		bool findingMax;
		if(array[0]>0){
			findingMax=true;
		}else{
			findingMax=false;
		}
		for(long long i:array){
			if(findingMax==true){
				if(i<0){
					sum+=(long long)(nmax);
					findingMax=false;
					nmin=max(nmin,i);
					nmax=0;
					continue;
				}
				nmax=max(nmax,i);
			}
			if(findingMax==false){
				if(i>0){
					sum+=(long long)nmin;
					findingMax=true;
					nmax=max(nmax,i);
					nmin=-10e10-1;
					continue;
				}
				nmin=max(nmin,i);
			}
		}
		if(nmin==-10e10-1){
			nmin=0;
		}
		sum+=(long long)(nmax+nmin);

		cout<<sum<<endl;
	}
}