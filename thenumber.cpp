
#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int T, N, d;
    string number;
/*

1
2 5

01234

56789

01456

13452
*/
    cin >> T;
    while (T --) {
        cin >> N >> d;

        vector<int> dp(1 << 10, 0xfff);
        dp[0] = 0;
        for (int i = 0; i < N; i ++) {
            cin >> number;
            int mask = 0;
            for (int i = 0; i < (int)number.size(); i ++) {
                mask |= (1 << (number[i] - '0'));
            }
//            cout<<mask<<" mask \n";
            for (int j = 0; j < (1 << 10); j ++) {
                dp[j | mask] = min(dp[j | mask], dp[j] + 1);
//                  cout<<dp[j|mask]<<" ";
            }

//              cout<<"\n";
        }

        cout << (dp[(1 << 10) - 1] == 0xfff ? -1 : dp[(1 << 10) - 1]) << endl;
    }



    return 0;
}
