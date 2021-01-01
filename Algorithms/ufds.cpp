ll p[n], size[n];

ll par(ll x){
    return (p[x] == x) ? x : p[x] = par(p[x]);
}

ll makeSet(ll v){
  p[v] = v;
  size[v] = 1;
}

bool isSameGroup(ll a, ll b){return par(a) == par(b);}

void merge(ll a, ll b){
    numGroups -= !isSameGroup(a,b);
    a = par(a);
    b = par(b);
    if(a != b){
      if(size[a] < size[b]){
        swap(a,b);
      }
      p[b] = a;
      size[a] += size[b];
    }
}
