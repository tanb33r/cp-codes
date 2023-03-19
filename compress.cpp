
void korlam(int Test) {
    int n,k=-2e9;
    cin>>n>>k;
    int a[n];
    int cnt = n ;
    vector<pair<int,int> > pi;
    f(i,n) {
        int x;
        cin>>x;
        pi.emplace_back(x,i);
    }
    sort(pi.begin(),pi.end());
    int i = 0;
    for(auto [x,y]:pi) {
        a[i++] = y;
    }


    f(i,n-1) {
        if(a[i]==a[i+1]-1)cnt--;
    }
//    arr(a,n);
//    yo(cnt);
    cout<<(cnt<=k?"Yes":"No")<<"\n";
}

