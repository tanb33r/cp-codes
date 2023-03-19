
typedef pair<int,int> pii;
void solve() {
    ll n;
    cin>>n;
    vector<pii> v;
    ll ans = 0ll;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            int cnt = 0;
            while(n % i == 0) {
                cnt++;
                n/=i;
            }
            v.push_back({i,cnt});
        }
    }
    if (n > 1) v.pb({n,1});
