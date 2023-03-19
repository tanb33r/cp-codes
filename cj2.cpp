#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n)  for(int i=int(j);i<=int(n);++i)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define endl "\n"
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))

#define vi vector<int>
typedef long long ll;
using namespace std;

int main()
{
    int tt = 0;
    w(t)
    {
        string s ;
        cin>>s;
        printf("Case #%d: ",++tt);
        string s2="";
        int b =0;

        int x  = s[0] - '0';
        f(j,x)
        s2+='(';

        b+=x;
        int flag  = 0 ;
        s2+=s[0];
        f(i,s.size())
        {
            int x =0;

            while(i+1<s.size() && s[i] == s[i+1])
            {

                flag =1;

                s2+=s[i++];


            }

            if(flag)
                i--,flag--;

            while(i+1<s.size() && s[i] < s[i+1])
            {
                flag =1;

                f(j,s[i+1]-s[i])
                s2+='(';

                b+=(s[i+1]-s[i]);
                s2+=s[i+1];
                i++;
            }

            if(flag)
                i--,flag--;


            while(i+1<s.size() && s[i] > s[i+1])
            {

                flag =1;
                f(j,s[i]-s[i+1])
                s2+=')';

                b-=(s[i]-s[i+1]);

                s2+=s[i+1];
                i++;
            }

            if(flag)
                i--,flag--;
        }
        f(i,b)
        s2+=')';
        cout<<s2<<endl;
    }
}

/*


123
123
112233
321
654
11223344332211

*/



