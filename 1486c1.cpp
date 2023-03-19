#include <iostream>

#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
using namespace std;

int main() {
    int n;
    cin>>n;
    int x,y,l=1,r=n;
    cout<<"? "<<l<<" "<<r<<endl;
    cin>>x;
    if(x!=1 and x != n) {
        cout<<"? "<<l<<" "<<x<<endl;
        cin>>y;
        if(x==y)r=max(1,x-1);
        else l=min(n,x+1);
    }
    int ans=0;
    if(l==r)ans=l;
    if(x==n)r=n-1;
    if(x==1)l=2;
    int cur;
    while(l<=r) {
        int mid=(l+r)/2;
        cout<<"? "<<min(x,mid)<<" "<<max(x,mid)<<endl;
        cin>>cur;
        if(cur==x) {
            ans=mid;
            if(mid>x) {
                r=mid-1;
            } else l=mid+1;
        } else {
            if(mid>x) {
                l=mid+1;
            } else r=mid-1;
        }
    }
    cout<<"! "<<ans<<endl;

}
