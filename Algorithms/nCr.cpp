ll combs[MXN][MXN];

ll nCr(ll n, ll r){
  if(combs[n][r] != 0) return combs[n][r];
  if(r == 0){
    combs[n][r] = 1;
  }
  else if(r > n){
    combs[n][r] = 0;
  }else if(r == 1){
    combs[n][r] = n;
  }else{
    combs[n][r] = nCr(n-1,r-1) + nCr(n-1,r);
  }
  return combs[n][r];
}
