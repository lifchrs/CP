#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	int n,count=0;
	cin>>n>>s;
	bool flip[1000003];
	int pref[1000003];
	for(int i=0;i<n;i++){
		if(s[i]=='(') count++; else count--;
		pref[i]=count;
		//cout<<count<<endl;
	}
	if(count!=0){
		cout<<"-1\n";
		return 0;
	}
	int answercount=0;
	for(int x=0;x<n;x++){
		if(pref[x]<0){
			flip[x+1]=true;
			flip[x]=true;
		}
		if(flip[x]) answercount++;
	}
	cout<<answercount<<endl;
	
}

//))((())(
