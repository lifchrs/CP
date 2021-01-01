//have a set of the index's of all of the os that are in the twos and ones.
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		set <int> os;
		string word;
		cin>>word;
		for(int i=0;i+2<word.length();i++){
			char a=word[i];
			char b=word[i+1];
			char c=word[i+2];
			string current="";
			current+=a;
			current+=b;
			current+=c;
			if(current=="two"){
				if(i+3<word.length()){
					if(word[i+3]=='n')
						os.insert(i+2);
					else
						os.insert(i+1);
				}else{
					os.insert(i+1);
				}
			}
			if(current=="one"){
				if(i>0){
					if(word[i-1]=='w')
						os.insert(i);
					else{
						os.insert(i+1);
					}
				}else{
					os.insert(i+1);
				}
			}
		}
		cout<<os.size()<<endl;
		for(int i:os){
			cout<<i+1<<" ";
		}
		cout<<"\n";
	}
}