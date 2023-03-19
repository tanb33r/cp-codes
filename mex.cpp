int n;
cin>>n;
int a[n];
int mex=1;
int mexa[n] = {};
map<int,int> mp;
for(int i=0; i<n; ++i) {
    cin>>a[i];
    while(mp[mex]) mex++;
    mp[a[i]]=1;
    mexa[i]=mex;
}
