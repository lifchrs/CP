#include <bits/stdc++.h>
using namespace std;
int answer=0;
int main() {
  int n, k;
  cin>>n>>k;
  vector <int> numbers;
  int ones=0, twos=0;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    if(a==0){
      twos++;
    }else{
      ones++;
    }
    numbers.push_back(a);
  }
  vector <vector<int > > groups;
  for(int i=0;i<k;i++){
    vector <int> bruh;
    for(int j=0;j<n/k;j++){
    //  cout<<k*j+i<<"\n";
      bruh.push_back(numbers[k*j+i]);
    }
    groups.push_back(bruh);
  }
  /*for(vector <int> a:groups){
    for(int b:a){
      cout<<b<<" ";
    }
    cout<<endl;
  }
  */

  for(vector <int> a:groups){
    int onecount=0,twocount=0;
    for(int i: a){
     // cout<<i<<endl;
      if(i==1){
        onecount++;
      }else{
        twocount++;
      }
    }
   // cout<<endl;

    if(onecount>twocount){
      answer+=twocount;
    }else{
      answer+=onecount;
    }
  }
  cout<<answer;

}

