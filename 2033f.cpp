#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
#define fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define pb                 push_back
#define eb                 emplace_back
#define pr(x)              cout<<x<<"\n"
#define vps(x)             return void(cout<<#x<<"\n")
#define ps(x)              cout<<#x<<"\n"
#define newl               cout<<"\n"
#define all(v)             (v).begin(), (v).end()
#define rall(v)            (v).rbegin(), (v).rend()
#define vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define F                  first
#define S                  second
#define deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define ll                 long long
#define pii                pair<int,int>
#define sz(x)              ((int)x.size())
#define II                 ({ll t;cin>>t;t;})
#define cbit(n,p)          ((n)&(1LL<<(p)))
#define sbit(n,p)          ((n)|(1LL<<(p)))
#define tbit(n,p)          ((n)^(1LL<<(p)))
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr
using namespace std;
void dbg_out() {
    cerr << endl;
}

// Function to count disturbances in the sequence
int countDisturbances(const vector<int>& sequence) {
    int disturbances = 0;
    for (int i = 1; i < sequence.size(); ++i) {
        if (sequence[i] == sequence[i - 1]) {
            ++disturbances;
        }
    }
    return disturbances;
}

// Function to update disturbance count after a swap between i and j
int updateDisturbances(const vector<int>& sequence, int disturbances, int i, int j) {
    int n = sequence.size();

    // Reduce the old disturbances caused by original elements
    if (i > 0 && sequence[i] == sequence[i - 1]) disturbances--;
    if (i < n - 1 && sequence[i] == sequence[i + 1]) disturbances--;
    if (j > 0 && sequence[j] == sequence[j - 1]) disturbances--;
    if (j < n - 1 && sequence[j] == sequence[j + 1]) disturbances--;

    // Add back disturbances caused by the swapped elements
    if (i > 0 && sequence[j] == sequence[i - 1]) disturbances++;
    if (i < n - 1 && sequence[j] == sequence[i + 1]) disturbances++;
    if (j > 0 && sequence[i] == sequence[j - 1]) disturbances++;
    if (j < n - 1 && sequence[i] == sequence[j + 1]) disturbances++;

    return disturbances;
}

int minimizeDisturbancesDP(vector<int>& sequence) {
    int n = sequence.size();
    int initialDisturbances = countDisturbances(sequence);

    // DP table to track minimum disturbances
    vector<vector<int>> dp(n, vector<int>(n, 0));

    // Base case: Initial disturbance count
    for (int i = 0; i < n; ++i) {
        dp[i][i] = initialDisturbances;
    }

    // Fill DP table for subarrays of increasing length
    for (int len = 2; len <= n; ++len) {
        for (int l = 0; l <= n - len; ++l) {
            int r = l + len - 1;

            // Calculate disturbances after swapping elements at indices l and r
            dp[l][r] = dp[l + 1][r - 1];  // Start with no swap for this subarray
            dp[l][r] = updateDisturbances(sequence, dp[l][r], l, r);  // Apply the swap and update
        }
    }

    // Return the minimum disturbance in the whole array (after all swaps)
    return dp[0][n - 1];
}

void solve() {
    // Input sequence of students
    int n;
    cin>>n;

    vector<int> sequence(n);
//     = {2, 1, 2, 2, 1, 1};
    f(i,n) cin>>sequence[i];
    // Call the DP function to minimize disturbances
    int result = minimizeDisturbancesDP(sequence);

    // Output the result
    cout << "Minimal disturbances after swaps: " << result << endl;

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


