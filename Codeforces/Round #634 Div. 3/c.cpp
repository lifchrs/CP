#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while (t-->0){
    int n;
    cin>>n;
    vector<int> freq;
    freq.assign(n,0);
    int maxi=0;
    int unique=-1;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      if(freq[x-1]==0){
	      unique++;
      }
      freq[x-1]+=1;
      maxi=max(maxi,freq[x-1]);
    }
    if(unique>=maxi){
      cout<<maxi;
    }else if(maxi-1<=unique+1){
      cout<<maxi-1;
    }else{
      cout<<unique+1;
    }
    cout<<"\n";

  }
}
