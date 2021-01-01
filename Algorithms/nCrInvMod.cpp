ll MOD = int(1e9)+7;
const ll MXN = int(2e5+5);

ll facs[MXN]; //facs[i] will give i!
ll invF[MXN];

ll binpow(ll num,ll power, ll mod = 1e18){
	ll result = 1;
	while(power > 0){
		if(power & 1){
			result *= num;
			result %= mod;
		}
		num *= num;
		num %= mod;
		power >>= 1;
	}
	return result;
}

ll nCr(ll n, ll r){
  if(r > n) return 0;
  if(r < 0) return 0;
  if(r == 0) return 1;
  return ((facs[n] * invF[r]) % MOD * invF[n-r]) % MOD;
}

ll inv(ll n){
  return binpow(n,MOD-2,MOD);
}

void init(){
  facs[0] = 1;
  invF[0] = inv(facs[0]);
  FOR(i,1,MXN){
    facs[i] = (i*facs[i-1]) % MOD;
    invF[i] = inv(facs[i]);
  }
}
