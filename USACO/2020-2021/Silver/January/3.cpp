#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pl = pair<ll,ll>;
using vl = vector<ll>;
using vpl = vector<pl>;
#define mp make_pair
#define f first
#define s second
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define pb push_back
#define F0R(i,a) for(ll i=0;i<a;i++)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define nn << "\n"


ll n;
ll arr[6][6];
bool check(){
  F0R(ind,n-1){
    F0R(ind2,n-1){
      ll a = arr[ind2][ind] + arr[ind2][1+ind]+arr[1+ind2][ind]+arr[1+ind2][1+ind];
      if(a != 2){
        return 0;
      }
    }
  }
  return 1;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  ll vals[n][n];
  F0R(i,n) F0R(j,n) cin >> vals[i][j];
  ll ans = 0;
  FOR(i,1,int(pow(2,n*n))+1){
    string s;
    if(n == 1){
      s = bitset<1>(i).to_string();
    }
    if(n == 2){
      s = bitset<4>(i).to_string();
    }
    if(n == 3){
      s = bitset<9>(i).to_string();
    }
    if(n == 4){
      s = bitset<16>(i).to_string();
    }
    if(n == 5){
      s = bitset<25>(i).to_string();
    }
    ll cnt = 0;
    F0R(a,n){
      F0R(b,n){
        arr[a][b] = s[cnt] - '0';
        cnt++;
      }
    }

    if(check()){
      ll t = 0;
      F0R(a,n){
        F0R(b,n){
          if(arr[a][b]) t += vals[a][b];
        }
        ans = max(ans,t);
      }
    }
  }
  cout << ans nn;
}
