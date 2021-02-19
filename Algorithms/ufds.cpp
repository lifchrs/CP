ll p[n], sz[n], numGroups;

ll par(ll x){
    return (p[x] == x) ? x : p[x] = par(p[x]);
}

ll makeSet(ll v){
  p[v] = v;
  sz[v] = 1;
}

bool isSameGroup(ll a, ll b){return par(a) == par(b);}

void merge(ll a, ll b){
    numGroups -= !isSameGroup(a,b);
    a = par(a);
    b = par(b);
    if(a != b){
      if(sz[a] < sz[b]){
        swap(a,b);
      }
      p[b] = a;
      sz[a] += sz[b];
    }
}
