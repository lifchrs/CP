#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pl;
typedef vector<ll> vl;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define nn << "\n"
#define F0R(i,a) for(ll i=0;i<a;i++)
#define FOR(i,a,b) for(ll i=a;i<b;i++)

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll h1,a1,c1,h2,a2;
  cin >> h1 >> a1 >> c1 >> h2 >> a2;
  ll attCnt = 0, pCount = 0;
  vector<string> ans;
  while(h2 > 0){
    if(a1 >= h2){
      ans.pb("STRIKE");
      attCnt++;
      break;
    }
    if(h1 <= a2){
      pCount++;
      ans.pb("HEAL");
      h1 += c1 - a2;
    }else{
      attCnt++;
      h1 -= a2;
      ans.pb("STRIKE");
      h2 -= a1;
    }
  }
  cout << pCount+attCnt nn;
  for(auto a : ans) cout << a nn;
}
