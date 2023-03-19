#include <bits/stdc++.h>
using namespace std;
int Array[][10] = {
    {-2, 4, 7 },
    {3, -6, 6 },
    {2, 1, 12,}
};
int dp[10][10];
int r = 3, c = 3;
int Rock(int i, int j) {
    if (i >= 0 && i < r && j >= 0 && j < c) {
        if (dp[i][j] != -1) return dp[i][j];
        int ret = -1e9;
        ret = max(ret, Rock(i + 1, j + 1) + Array[i][j]);
        ret = max(ret, Rock(i + 1, j) + Array[i][j]);
        ret = max(ret, Rock(i + 1, j - 1) + Array[i][j]);
        return dp[i][j] = ret;
    }
    return 0;
}
int main() {
    for(int i=0; i<10; i++)
        for(int j=0; j<10; j++)
            dp[i][j] = -1;

    printf("%d\n", Rock(0, 0));
    return 0;
}
