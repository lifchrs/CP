#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t-->0){
    int n,a,b;
    cin>>n>>a>>b;
    int remainder=n%a;
    int diff=a-b;
    string letters="abcdefghijklmnopqrstuvwxyz";
    string repeat="";
    for(int i=0;i<b-1;i++){
      repeat+=letters[i];
    }
    for(int i=0;i<diff+1;i++){
      repeat+=letters[b-1];
    }
    string x="";
    for(int i=0;i<n/a;i++){
      x+=repeat;
    }
    for(int i=0;i<remainder;i++){
      x+=repeat[i];
    }
    cout<<x+"\n";
  }
}
