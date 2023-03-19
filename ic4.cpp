#include <bits/stdc++.h>
#define  f(i,n)       for(int i=0; i<n; i++)
#define  ff(i,j,n)    for(int i=int(j);i<=int(n);++i)
#define  sf(i)        scanf("%d",&i)
#define  pf(i)        printf("%d",i)
#define  pb(x)        push_back(x);
#define  in(x)        int x; cin>>x
#define  w(t)         int t; cin>>t; while(t--)
#define  d(x)         cout<<x<<"\n"
#define  endl         "\n"
#define  fopen        freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio       ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  PI           acos(-1.0)
#define  all(v)       v.begin(),v.end()
#define  mem(a,value) memset(a,value,sizeof(a))
#define  vi           vector<int>

typedef long long     ll;

const int mod = 1000000007;
using namespace std;

int main() {
    string s1[5];
    string a0[5] = {
        {"***"},
        {"* *"},
        {"* *"},
        {"* *"},
        {"***"},
    };
    string a1[5] = {
        {"  *"},
        {"  *"},
        {"  *"},
        {"  *"},
        {"  *"},
    };
    string a2[5] = {
        {"***"},
        {"  *"},
        {"***"},
        {"*  "},
        {"***"},
    };
    string a3[5] = {
        {"***"},
        {"  *"},
        {"***"},
        {"  *"},
        {"***"},
    };
    string a4[5] = {
        {"* *"},
        {"* *"},
        {"***"},
        {"  *"},
        {"  *"},
    };
    string a5[5] = {
        {"***"},
        {"*  "},
        {"***"},
        {"  *"},
        {"***"},
    };
    string a6[5] = {
        {"***"},
        {"*  "},
        {"***"},
        {"* *"},
        {"***"},
    };
    string a7[5] = {
        {"***"},
        {"  *"},
        {"  *"},
        {"  *"},
        {"  *"},
    };
    string a8[5] = {
        {"***"},
        {"* *"},
        {"***"},
        {"* *"},
        {"***"},
    };
    string a9[5] = {
        {"***"},
        {"* *"},
        {"***"},
        {"  *"},
        {"***"},
    };

    f(i,5)
    getline(cin,s1[i]);

    int k  = (s1[0].size()+1) /4;
    int j = 0;
    string s[5];
    int pos = 1;

    int ans =  0 ;

    f(i,k) {
        f(gg,5) {
            s[gg] = "";
            s[gg]+=s1[gg][j];
            s[gg]+=s1[gg][j+1];
            s[gg]+=s1[gg][j+2];
        }

        int flag = 0 ;

        if(flag == 0)
            f(ii,5)
            if(s[ii]!=a0[ii]) {
                flag = 1;
                break;
            }

        if(flag == 1)
            f(ii,5)
            if(s[ii]!=a1[ii]) {
                flag = 2;
                break;
            }

        if(flag == 2)
            f(ii,5)
            if(s[ii]!=a2[ii]) {
                flag = 3;
                break;
            }

        if(flag == 3)
            f(ii,5)
            if(s[ii]!=a3[ii]) {
                flag = 4;
                break;
            }

        if(flag == 4)
            f(ii,5)
            if(s[ii]!=a4[ii]) {
                flag = 5;
                break;
            }

        if(flag == 5)
            f(ii,5)
            if(s[ii]!=a5[ii]) {
                flag = 6;
                break;
            }

        if(flag == 6)
            f(ii,5)
            if(s[ii]!=a6[ii]) {
                flag = 7;
                break;
            }

        if(flag == 7)
            f(ii,5)
            if(s[ii]!=a7[ii]) {
                flag = 8;
                break;
            }

        if(flag == 8)
            f(ii,5)
            if(s[ii]!=a8[ii]) {
                flag = 9;
                break;
            }

        if(flag == 9)
            f(ii,5)
            if(s[ii]!=a9[ii]) {
                flag = 10;
                break;
            }

        if(flag == 10)
            pos = 0;

        ans = ans*10 + flag;

        j+=4;
    }
    if(pos)
        if(ans != 0)
            if(ans%6 == 0) {
                cout<<"BEER!!"<<endl;
                return 0;
            }
    cout<<"BOOM!!"<<endl;
}
