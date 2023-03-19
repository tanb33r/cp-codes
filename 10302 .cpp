#include <bits/stdc++.h>
#include <math.h>
using namespace std;
long  double n[50001];
int main()
{
    long  int t;
    long   int i;
    for(i = 1; i<=50000; i++)
        n[i]=n[i-1]+pow(i,3.0);
    while(cin>>t)
        cout<<n[t]<<endl;
        //cout<<n[t]<<pow(t,3)<<endl;
}
