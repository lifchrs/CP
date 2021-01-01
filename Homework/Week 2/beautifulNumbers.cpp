//store the current max and min. start at one, and move on both sides if there a number m< on either side.  
#include <bits/stdc++.h> 
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long maxPos=-1,minPos=n;
		const int x=2e5;
		long long nums[x];
		for(long long j=0;j<n;j++){
			long long d;
			cin>>d;
			nums[d-1]=j;
		}
		string m="";
		for (long long i = 0; i < n; i++){
        	minPos=min(minPos,nums[i]);
        	maxPos=max(maxPos,nums[i]);
        	if(maxPos-minPos==i)
            	m+='1';
        	else
            	m+='0';
    }
    cout<<m<<"\n";
	}
}