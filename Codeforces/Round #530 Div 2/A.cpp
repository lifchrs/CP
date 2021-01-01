#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,a,b,c,d,x,y,x1,y1,x2,y2,count=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
    int right=b-a,up=d-c;
    if(b>a){
      if(x2==x){
        cout<<"No\n";
        continue;
      }
    }else if(b<a){
      if(x1==x){
        cout<<"No\n";
        continue;
      }
    }else if(b==a&&a!=0){
      if(x2==x&&x1==x){
        cout<<"No\n";
        continue;
      }
    }
    if(d>c){
      if(y2==y){
        cout<<"No\n";
        continue;
      }
    }else if(d<c){
      if(y1==y){
        cout<<"No\n";
        continue;
      }
    }else if(d==c&&c!=0){
      if(y2==y&&y1==y){
        cout<<"No\n";
        continue;
      }
    }
    if(x1<=right+x&&x2>=right+x&&y1<=up+y&&y2>=up+y){
      cout<<"Yes"<<"\n";
    }else{
      cout<<"No"<<"\n";
    }
  }
}
