#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double; // or double, if TL is tight
using str = string; // yay python!

using pl = pair<ll,ll>;
using pd = pair<ld,ld>;

using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<ld>;
using vs = vector<str>;
using vpl = vector<pl>;
using vpd = vector<pd>;
// pairs #define mp make_pair #define f first #define s second #define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define ins insert
#define ft front()
#define bk back()
#define pb push_back
#define eb emplace_back
#define pf push_front

#define lb lower_bound
#define ub upper_bound

#define F0R(i,a) for(ll i=0;i<a;i++)
#define FOR(i,a,b) for(ll i=a;i<b;i++)

#define nn << "\n"


ll dp[int(1e5)+1][21][3]; //dp[number of moves completed][number of switches][currHand] = score
int main(){
  ifstream cin("hps.in");
  ofstream cout("hps.out");
  ll n, k;
  cin >> n >> k;
  vl moves(n+1);
  FOR(i,1,n+1){
    char a;
    cin >> a;
    if(a == 'P'){
      moves[i] = 1;
    }else if(a == 'H'){
      moves[i] = 0;
    }else moves[i] = 2;
  }
  FOR(i,1,n+1){
    F0R(j,k+1){
      F0R(x,3){
        dp[i][j][x] = dp[i-1][j][x]; //this is always at least the minimum
        if(j > 0){ //if a switch has been completed
          dp[i][j][x] = max(max(dp[i-1][j-1][(x+1)%3],dp[i-1][j-1][(x+2)%3]),dp[i][j][x]);
        }
        dp[i][j][x] += (moves[i] == (x)%3); //adding the score from the current round
      }
    }
  }
  ll ans = 0;
  F0R(i,n+1){
    F0R(j,k+1){
      F0R(x,3){
        ans = max(ans, dp[i][j][x]);
      }
    }
  }
  cerr <<  ans nn;
  cout << ans nn;
}
