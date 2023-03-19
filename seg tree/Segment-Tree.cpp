///range sum. enclose the whole in struct if needed
const int MAX = 1e5;

ll trN[4*MAX];

void combine(ll &trP,ll &trL,ll &trR){
    trP=trL+trR;
}

void init(int n,int l,int r){
    if(l==r){
        trN[n]=0;///initial val
        return;
    }
    int m=(l+r)/2;
    init(2*n,l,m);
    init(2*n+1,m+1,r);

    combine(trN[n],trN[2*n],trN[2*n+1]);
}

void update(int n,int l,int r,int i,ll val){
    if(i<l || r<i)return;
    if(i<=l && r<=i){
        trN[n]+=val;
        return;
    }
    int m=(l+r)/2;
    update(2*n,l,m,i,val);
    update(2*n+1,m+1,r,i,val);

    combine(trN[n],trN[2*n],trN[2*n+1]);
}

ll query(int n,int l,int r,int i,int j){
    if(j<l || r<i)      return 0;///ignored val
    if(i<=l && r<=j)    return trN[n];
    int m=(l+r)/2;
    ll trQL=query(2*n,l,m,i,j);
    ll trQR=query(2*n+1,m+1,r,i,j);
    ll trP;
    combine(trP,trQL,trQR);
    return trP;
}
