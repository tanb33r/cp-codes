///range sum. enclose the whole in struct if needed
const int MAX = 1e5;

ll trN[4*MAX],trNlazy[4*MAX];

void combine(ll &trP,ll &trL,ll &trR){
    trP=trL+trR;
}

void push(int n,int l,int r,int m){
    trN[2*n]+=trNlazy[n]*(m-l+1);
    trN[2*n+1]+=trNlazy[n]*(r-(m+1)+1);

    trNlazy[2*n]+=trNlazy[n];
    trNlazy[2*n+1]+=trNlazy[n];
    trNlazy[n]=0;
}

void init(int n,int l,int r){
    if(l==r){
        trN[n]=0;
        trNlazy[n]=0;
        return;
    }
    int m=(l+r)/2;
    init(2*n,l,m);
    init(2*n+1,m+1,r);
    combine(trN[n],trN[2*n],trN[2*n+1]);
    trNlazy[n]=0;
}

void update(int n,int l,int r,int i,int j,ll val){
    if(j<l || r<i)return;
    if(i<=l && r<=j){
        trNlazy[n]+=val;
        trN[n]+=(r-l+1)*val;
        return;
    }
    int m=(l+r)/2;
    push(n,l,r,m);
    update(2*n,l,m,i,j,val);
    update(2*n+1,m+1,r,i,j,val);
    combine(trN[n],trN[2*n],trN[2*n+1]);
}

ll query(int n,int l,int r,int i,int j){
    if(j<l || r<i)      return 0;
    if(i<=l && r<=j)    return trN[n];
    int m=(l+r)/2;
    push(n,l,r,m);
    ll trQL=query(2*n,l,m,i,j);
    ll trQR=query(2*n+1,m+1,r,i,j);
    ll trP;
    combine(trP,trQL,trQR);
    return trP;
}
