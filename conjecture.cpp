#include <bits/stdc++.h>

#define ll long long int
#define N 10000000
#define P 100
using namespace std;
bool flag[N+5];
int primes[P+5];
vector<int> v;
void sieve()
{
    int i,j,total=0,val;

    for(i=3; i*i<=N; i+=2)
        if(!flag[i])
            for(j=i*i; j<=N; j+=i+i)
                flag[j]=1;

    for(i=3; i<=N; i+=2)
        if(!flag[i])
            v.push_back(i);
}

int main()
{

    sieve();
    int t,t2=0,n;
    cin>>t;

    while(t--)
    {
        int c=0;
        cin>>n;
        cout<<"Case "<<++t2<<": ";
        if(n==4)
        {
            cout<<"1"<<endl;
            continue;
        }

        for(int i=0; v[i]<=n/2; i++)
                if(!flag[n-v[i]])
                    c++;

        cout<<c<<endl;
    }
    return 0;
}
