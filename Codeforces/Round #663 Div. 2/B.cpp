#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef double db;
typedef string str;
typedef pair<ll,ll> pl;
typedef vector<ll> vl;
typedef vector<vl> vvl;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define nn <<"\n"
#define F0R(i,a) for(ll i=0;i<a;i++)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
ll INF=0x3f3f3f3f3f3f3f3f;
ll MOD=(ll)(1e9+7); //1e9+7

ll binpow(ll a,ll b, ll c=1e18){
ll res=1;
while(b>0){
if(b & 1){
res*=a;
res%=c;
}
a*=a;
a%=c;
b>>=1;
}
return res;
}
char arr[101][101];
const int MXN=100000;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  //ifstream cin("name.in");
  //ofstream cout("name.out");
    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        F0R(i,n){
            F0R(j,m){
                char a;
                cin >> a;
                arr[i][j] = a;
            }
        }
        F0R(i,n){
            F0R(j,m){
           //     cout << arr[i][j] << " ";
            }
           // cout nn;
        }
        ll ans = 0;
        ll count = 0;
        F0R(i,m-1){
            if(arr[n-1][i] != 'R'){
                count++;
             //  cout << arr[n-1][i];
            }
        //    cout << arr[n-1][i] << " ";
        }
        cout nn;
        ans += count;
        count = 0;
        F0R(i,n-1){
          if(arr[i][m-1] != 'D'){
            count++;
           // cout << arr[n-1][i];
          }
        }
        cout nn;
       // cout << count nn;
      
        ans += count;
        cout << ans nn;
    }
}
