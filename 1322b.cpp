#include <bits/stdc++.h>
#define f(i,n) for(int i=0; i<n; i++)
#define ff(i,j,n)  for(int i=int(j);i<=int(n);++i)
#define sf(i) scanf("%d",&i)
#define pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))
#define vi vector<int>
typedef long long ll;
using namespace std;

vector<int>prime{2,3,5,7,11,13,17,19,23,29,31};
int main()
{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//b

    w(t)
    {
        in(n);
        int a[n];
        map<int,int> m,m2;
        f(i,n)
        {
            in(x);
            f(j,11)
            {
                if(x%prime[j] == 0)
                {
                    a[i] = j+1;
                    break;
                }
            }
        }

        f(i,n)
        m[a[i]]++;

        cout<<m.size()<<endl;
        m.clear();
        int j =1;
        f(i,n)
        {
            if(m2[a[i]]==0)
                m2[a[i]] = j++;
            cout<<m2[a[i]]<<" ";
        }
        cout<<endl;
    }
}



