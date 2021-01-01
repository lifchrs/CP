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
