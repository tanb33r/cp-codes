#include<bits/stdc++.h>
#define SIZE 100000
#define ll long long int
using namespace std;
int Prime[SIZE], Pt;
ll Sieve() {
	Pt = 0;
	int i, j, mark[SIZE] = {0};
	Prime[Pt++] = 2;
	for(i = 3; i < SIZE; i += 2) {
		if(!mark[i]) {
			Prime[Pt++] = i;
			for(j = 3; i*j < SIZE; j += 2)
				mark[i*j] = 1;
		}
	}
	return Pt;
}

int main()
{
    ll total=Sieve();
    cout<<total<<endl;
   // printf("Total Primes: %lld\n",total);
  /*  for(int i=0; i<total; i++)
        printf("%d\n",primes[i]);
*/
         ll i,n;
    while(cin>>n,n)
    {
        ll ans=0;
       // printf("%3d! =", n);
        while(n)
        {
            ll tmp = n;
            for(i=0; i<total && tmp!=1; i++)
            {
                while(tmp%Prime[i]==0)
                {
                    tmp/=Prime[i], ans++;
                }
            }
            n--;
        }
        cout<<ans<<endl;
     // printf("%lld\n", ans);

        }
        cout<<endl;


}
