#include<bits/stdc++.h>
using namespace std;

#define MX 30000+5
int parent[MX];
int cnt[MX];

void init(int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = i;
        cnt[i] = 1;
    }
}

int Find(int u) {
    if (u == parent[u]) return u;
    return parent[u] = Find(parent[u]);
}

void Union(int u, int v) {
    int p = Find(u);
    int q = Find(v);
    if (p != q) {
        parent[q] = p;
        cnt[p] += cnt[q];
    }
}

int findSize(int u) {
    if (u == parent[u]) return cnt[u];
    return findSize(parent[u]);
}

int main() {
//    freopen("input.txt", "r", stdin);
    int n, m;
    while(scanf("%d%d", &n, &m) && (n + m) > 0) {
        init(n);

        for (int group = 1; group <= m; group++) {
            int k;
            scanf("%d", &k);

            // 1, 2, 3, 4
            int firstMember;
            scanf("%d", &firstMember);

            for (int i = 2; i <= k; i++) {
                int u;
                scanf("%d", &u);
                Union(firstMember, u);
            }
        }

        int totalSuspects = findSize(0);
        printf("%d\n", totalSuspects);
    }
    return 0;
}
