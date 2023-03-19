#include<bits/stdc++.h>
using namespace std;

long long n,t=1,k[5005]= {0,1},m=1e9+7;
char c;

int main() {
    cin>>n;
    while(n-- && cin>>c)
        if(c=='f')t++;
        else for(int i=1; i<=t; k[i]+=k[i-1]%=m,i++);
    cout<<k[t]%m<<'\n';
}
