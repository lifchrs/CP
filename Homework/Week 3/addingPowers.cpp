#include <bits/stdc++.h>
using namespace std;
int power(int a,int b){
	int answer=1;
	for(int i=0;i<b;i++){
		answer*=a;
	}
	return answer;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long t;
	cin>>t;
	while (t--){
		long long n,k;
		long long zeroes=0;
		cin>>n>>k;
		set<long long> ns;
		for(long long i=0;i<n;i++){
			long long a;
			if(!a) zeroes++;
			cin>>a;
			ns.insert(a);
		}
		bool done=0, answer=1;
		long long currentexp=(long long)(log(*--ns.end())/log(k));
		while(!done&&ns.size()>0){
			if(ns.size()<n-zeroes){
				done=1;
				answer=0;
			}
			long long last=*--ns.end();
			long long secondlast=*prev(prev(ns.end()));
			ns.erase(prev(ns.end()));
			if(secondlast>(long long)(power(k,currentexp))){
				done=1;
				answer=0;
			}
			if(last>int(pow(k,currentexp))){
				ns.insert(last-int(power(k,currentexp)));
			}
			if(last==(long long)(power(k,currentexp))) zeroes++;
			
		}
		if(answer){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}

}
