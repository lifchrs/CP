#include <iostream>
int wsubtract(int a){
  if(a%10==0){
    return a/10;
  }else{
    return a-1;
  }
}
using namespace std;
int main() {
  int n,a;
  cin>>n>>a;
  for(int i=0;i<a;i++){
    n=wsubtract(n);
  }
  cout<<n;
}
