#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b,copya;
		cin>>a>>b;
		if(a<b){ cout<<a<<endl; continue;}
		copya=a;
		sort(copya.begin(),copya.end());
		int diffIndex;
		//cout<<copya<<endl;
		char goodchar, badchar;
		for(int i=0;i<a.length();i++){
			if(copya[i]!=a[i]){
				diffIndex=i;
				goodchar=copya[i];
				badchar=a[i];
				a[i]=goodchar; //swap 
			//	cout<<goodchar<<endl;
				break;
			}
		}
		for(int i=a.length()-1;i>=0;i--){ //This is to do the second part of the swap
			if(a[i]==goodchar){
				a[i]=badchar;
				break;
			}
		}
		if(a<b) cout<<a<<endl; else cout<<"---"<<endl;
	}
}
