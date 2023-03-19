#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define  SIZE 100009
using namespace std;

void SieveOfEratosthenes()
{
    bool prime[SIZE];
    memset(prime,0,sizeof(prime));

    for (int p=2; p*p<=n; p++)
        if (prime[p])
            for (int i=p*p; i<=n; i += p)
                prime[i] = 0;

      // Print all prime numbers
      for (int p=2; p<=n; p++)
         if (prime[p])
            cout<<p<<" ";
}

int main()
{
    int t,n,m,s,x;

    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
            pf(-n;)
            else
            {
                int n2 = n;
                int c=1;
                while(n2/=10)
                    c*=10;

                for(int i = c; i<)
                }
    }
//    vector<int> v;


}


