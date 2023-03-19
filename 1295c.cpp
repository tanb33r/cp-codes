#include<bits/stdc++.h>
using namespace std;

const int N = int(2e5) + 99;
const int INF = int(1e9) + 99;

int tc;
string s, t;
int nxt[N][26];

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin >> tc;
    while(tc--) {
        cin >> s >> t;asd
        for(int i = 0; i < s.size() + 5; ++i)
            for(int j = 0; j < 26; ++j)
                nxt[i][j] = INF;

        for(int i = s.size()-1; ~i; --i) {
            for(int j = 0; j < 26; ++j)
                nxt[i][j] = nxt[i+1][j];
            nxt[i][s[i] - 'a'] = i;
        }

        int res = 1, pos = 0;

        for(int i = 0; i < t.size(); ++i) {
            if(pos == s.size())
                pos = 0, res++;
            if(nxt[pos][t[i]-'a'] == INF)
                pos = 0, res++;
            if(nxt[pos][t[i]-'a'] == INF and pos == 0 ) {
                res = INF;
                break;
            }
            pos = nxt[pos][t[i] - 'a'] + 1;
        }
        cout<< (res >= INF? -1:res) <<endl;
    }
}
