ll binPow(ll a, ll x){
    if(x==0)return 1;
    if(x==1)return a%MOD;
    ll r=binPow(a,x/2);
    r=(r*r)%MOD;
    if(x&1)r=(r*a)%MOD;
    return r;
}
