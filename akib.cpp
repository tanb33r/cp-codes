/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define lli long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ALL(x) x.begin(), x.end()
#define print(x) cout<<x<<"\n";
#define cases(x, y) for(int x=1; x<=y; x++)
#define PI acos(-1.0)
#define maxiii(a, b, c) max(max(a, b), c)
#define miniii(a, b, c) min(min(a, b), c)
#define nl cout<<"\n"
#define point(x) fixed<<setprecision(x)
#define printcase(c, n) cout << "Case " << c << ": " << n <<endl
#define printcaseii(c, n, m) cout << "Case " << c << ": " << n << " " << m <<endl
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i] << " ";} cout<<endl
#define aprint(ar, n) for(int i=0; i<n; i++){cout << ar[i] << " ";}cout<<endl
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define INPUT freopen("input.txt", "r", stdin)
#define OUTPUT freopen("output.txt", "w", stdout)
using namespace std;
lli findLCM(lli a, lli b) {
    return ((a*b)/__gcd(a,b));
}
lli input() {
    lli x;
    cin >> x;
    return x;
}
bool cmp(pair<int, int> a, pair<int, int> b) {
    return (a.first*a.second)>(b.first*b.second);
}

void solve(int tc) {
    string s;
    cin >> s;
    int cnt=0, mini=INT_MAX;
    char a, b;
    //for one
    for(int i=1; i<s.size()-1; i++) {
        if(s[i]=='1' && s[i+1]=='1') {
            if(!cnt) a = s[i-1];
            cnt++;
        } else {
            if(s[i]=='1') {
                a = s[i-cnt-1];
                b = s[i+1];
                cnt++;
                if(a=='2' and b=='3' || a=='3' and b=='2') {
                    mini = min(mini, cnt+2);
                    cnt=0;
                }
            }
        }
    }

    cnt=0;
    for(int i=1; i<s.size()-1; i++) {
        if(s[i]=='2' && s[i+1]=='2') {
            if(!cnt) a = s[i-1];
            cnt++;
        } else {
            if(s[i]=='2') {
                a = s[i-cnt-1];
                b = s[i+1];
                cnt++;
                if(a=='1' and b=='3' || a=='3' and b=='1') {
                    mini = min(mini, cnt+2);
                    cnt=0;
                }
            }
        }
    }

    //for three
    cnt=0;
    for(int i=1; i<s.size()-1; i++) {
        if(s[i]=='3' && s[i+1]=='3') {
            if(!cnt) a = s[i-1];
            cnt++;
        } else {
            if(s[i]=='3') {
                a = s[i-cnt-1];
                b = s[i+1];
                cnt++;
                if(a=='1' and b=='2' || a=='2' and b=='1') {
                    mini = min(mini, cnt+2);
                    cnt=0;
                }
            }
        }
    }

    if(mini==INT_MAX) {
        print(0);
    } else {
        print(mini);
    }
}


int main() {
    FastIO;

    int tc = 1;
    cin >> tc; //TEST CASE
    for(int i=1; i<=tc; i++) {
        solve(i);
    }
}
