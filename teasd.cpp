#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef tuple<int, int, int> iii;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ll> vll;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define LSOne(S) ((S) & (-S))

void solve()
{
    int cnt[26] = {0};
    string s;
    cin >> s;

    int n = s.size();
    string t(n, '.');
    for (char c : s)
        cnt[c - 'a']++;
    int l = 0, r = n - 1;
    for (int i = 0; i < 26; i++)
    {
        while (cnt[i] >= 2)
        {
            cnt[i] -= 2;
            t[l++] = i + 'a';
            t[r--] = i + 'a';
        }
        if (cnt[i])
        {
            int x = i + 1;
            while (cnt[x] == 0)
            {
                x++;
            }
            if (cnt[x] == r - l)
            {
                while (cnt[x] >= 2)
                {
                    cnt[x] -= 2;
                    t[l++] = x + 'a';
                    t[r--] = x + 'a';
                }
                if (cnt[x])
                    t[l++] = x + 'a';
            }
            else
            {
                for (; x < 26; x++)
                {
                    while (cnt[x]--)
                        t[l++] = x + 'a';
                }
            }
            t[r--] = i + 'a';
            break;
        }
    }
    cout << t << "\n";
}
int main()
{
//    ios_base::sync_with_stdio(0), cin.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}

gcc -o Compare_Performance Compare_Performance.c Compare_Performance.h -I
