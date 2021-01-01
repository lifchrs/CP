#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define se second
#define pb push_back
#define pf push_front
#define ll long long
#define F0R(i,a) for(int i=0;i<a;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)
ll binpow(ll a,ll b){
	ll res=1;
	while(b>0){
		if(b & 1)
			res*=a;
		a*=a;
		b>>=1;
	}
	return res;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("name.in");
	//ofstream cout("name.out");
 int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n, k;
        cin >> n >> k;
        cin >> s;
        int count = 0;
        vector<int> zeros;
        bool onexist = false;
        FOR(i, 0, s.size())
        {
            if (s[i] == '0')
            {
                count++;
            }
            else
            {
                zeros.pb(count);
                count = 0;
                onexist = true;
            }
        }
        zeros.pb(count);
        FOR(i, 0, zeros.size())
        {
            //cout << zeros[i];
        }

        int sum = 0;

        FOR(i, 0, zeros.size())
        {
            if (i == 0)
            {
                if (s[0] == '0')
                {

                    sum += ((zeros[0]) / (k + 1));
                }
                else
                {
                    sum += (zeros[i]) / (2 * k + 1);
                }
            }

            else if (i == zeros.size() - 1)
            {
                if (s[s.size() - 1] == '0')
                {
                    sum += ( (zeros[i]) / ( k + 1));
                }
                else
                {
                    sum += (zeros[i]) / (2 * k + 1);
                }
            }

            else
            {
                sum += (zeros[i]) / (2 * k + 1);
            }
        }
        if (onexist == true)
        {
            cout << sum;
        }
        else
        {
            cout << (n - 1) / (k + 1) + 1;
        }
        cout<<"\n"

}
