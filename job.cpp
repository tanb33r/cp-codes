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
string s2 = "";


typedef struct Node
{
    int f=0,sec=0;
} NODE;
NODE c, j ;

bool cw[1445], jw[1445];

bool checkJobs(int startin[], int endin[], int n)
{

    vector<pair<int, int> > a;
    for (int i = 0; i < n; i++)
        a.push_back(make_pair(startin[i], endin[i]));

//

/*

5
3
1 3
1 3
2 2
3 4
3 4

*/
//    c.sec = a[0].second;
//    c.f = a[0].first;
//    s2 += "C";
//    d(s2);
    for (int i = 0; i < n; i++)
    {


        if (!((a[i].first > c.f && a[i].first < c.sec) || (a[i].second > c.f && a[i].second < c.sec)))
        {
            int flag = 0;
            c.sec = a[i].second;
            c.f = a[i].first;
            s2+="C";

            for(int ii = c.f ; ii<c.sec; ii++ )
                if(cw[ii] == 1)
                {
                    flag = 1 ;

                    d(flag);
                    break;
                }
            if(flag)
                return 0;
            memset(cw+c.f,1,c.sec-c.f);
            d(s2);
        }

        else if (!((a[i].first > j.f && a[i].first < j.sec) || (a[i].second > j.f && a[i].second < j.sec)))
        {
            int flag = 0;
            j.sec = a[i].second;
            j.f = a[i].first;
            s2+="J";


            for(int ii = j.f ; ii<j.sec; ii++ )
                if(jw[ii] == 1)
                {
                    flag = 1;
                    break;
                }
            if(flag)
                return 0;

            memset(jw+j.f,1,j.sec-j.f);

            d(s2);
        }
        else
            return 0;
    }
    return 1;
}

/*
1
5
99 150
1 100
100 301
2 5
150 250


*/


int main()
{
    int tt = 0;
    w(t)
    {

        memset(cw,0,1445);
        memset(jw,0,1445);
        s2="";
        in(n);

        int s[n];
        int e[n];
        f(i,n)
        {
            cin>>s[i]>>e[i];
        }
        int x = sizeof(s) / sizeof(s[0]);
        int xx = checkJobs(s, e, x);
        printf("Case #%d: ",++tt);
        if(xx)
            cout <<s2<<endl;
        else
            cout <<"IMPOSSIBLE"<<endl;

    }
}


/*

1
4
0 15
2 122
16 17
2 4


*/








