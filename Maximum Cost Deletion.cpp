
void solve() {
    int n,a,b;
    string s;
    cin>>n>>a>>b>>s;
    int ans=a*n;
    if(b>=0) {
        ans+=b*n;
    } else {
        char c = '6';
        for(int i = 0 ; i<n; i++) {
            if(c==s[i]) continue;
            cnt++;
            c = s[i];
        }
        ans+= ((cnt/2)+1)*b;
    }
    cout<<ans<<endl;
}
