#include<bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

int main(){
    Fast;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>zero(n+m+1,0),one(n+m+1,0);
        int x;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>x;
                (x==0)?zero[i+j]++:one[i+j]++;

            }
        }
        int ans=0;
        for(int i=0;i<(n+m-1)/2;i++)
            ans+=min(zero[i]+zero[(n+m-2)-i],one[i]+one[(n+m-2)-i]);

        cout<<ans<<"\n";
    }
}
