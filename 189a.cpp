#include <iostream>
using namespace std;

int main(){
  int n, a, b, c; cin >> n >> a >> b >> c;
  int dp[n+1];
  for(int i = 0; i <= n; i ++) dp[i] = -1;
  if(a<=n) dp[a]=1;
  if(b<=n) dp[b]=1;
  if(c<=n) dp[c]=1;
  for(int i = min(a, min(b, c)); i <= n; i ++){
    if(i-a>=0&&dp[i-a]>0) dp[i] = max(dp[i], dp[i-a]+1);
    if(i-b>=0&&dp[i-b]>0) dp[i] = max(dp[i], dp[i-b]+1);
    if(i-c>=0&&dp[i-c]>0) dp[i] = max(dp[i], dp[i-c]+1);
  }
  cout << dp[n] << endl;
  return 0;
}
