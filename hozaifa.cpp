#include <bits/stdc++.h>
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
using namespace std;

int digsum(int n) {
    int sum =0 ;
    while(n) {
        sum+=n%10;
        n/=10;
    }
    return sum;


}
int main() {
    int n,s;
    cin>>n>>s;
    int k = n;

    int pass= 0;
    while(k!=0) {
        pass*=10;
        pass+=9;
        k--;
    }

    while(digsum(pass)!=s and pass>0)
        pass--;

    if(pass==0)
        cout<<-1<<endl;
    else
        cout<<pass<<endl;
}
