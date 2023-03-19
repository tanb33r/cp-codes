#include <bits/stdc++.h>
using namespace std;

int s(int n)
{
    int sum = 0;
    while (n)
    {
        int d = n % 10;
        sum += d * d;
        n /= 10;
    }
    return sum;
}

int main()
{
    int T, t = 1;
    cin >> T;
    while ( T-- )
    {
        int N, n;
        cin >> N;
        n = N;
        map<int, int> memo;

        while (memo.count(n) == 0 and n != 1)
        {
            memo[n] = 1;
            n = s(n);
        }
        cout << "Case #" << t++ << ": " << N;

        if (n == 1)            cout << " is a Happy number." << endl;
        else                   cout << " is an Unhappy number." << endl;
    }
    return 0;
}
