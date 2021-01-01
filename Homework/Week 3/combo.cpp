#include <bits/stdc++.h>
using namespace std;
int charToNum(char a){
	return a-'a'+1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		string combo;
		cin>>combo;
		vector<vector <int> >pref;
		vector<int> alphabets(26);
		vector<int> answers(26);
		for(int i=0;i<combo.length();i++){
			alphabets[charToNum(combo[i])-1]++;
			pref.push_back(alphabets);
		}
		int x;		
		for(int i=0;i<m;i++){
			cin>>x;
			for(int z=0;z<26;z++){
				answers[z]+=pref[x-1][z];
			}
		}
		for(int z=0;z<26;z++){
				answers[z]+=pref[n-1][z];
			}
		for(int i:answers){
			cout<<i<<" ";
		}
		cout<<"\n";
	}
		
}

