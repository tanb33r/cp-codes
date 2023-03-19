#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i, j, n, m, a, b, c, ara[100001] = {0};
  cin >> n >> m;
  while (m--)
  {

    cin >> a >> b >> c;

    if (ara[a] != 0) {
      ara[b] = ara[a] % 3 + 1;
      ara[c] = ara[b] % 3 + 1;
    }

    else if (ara[b] != 0) {
      ara[a] = ara[b] % 3 + 1;
      ara[c] = ara[a] % 3 + 1;

    }
    else if (ara[c] != 0)
    {
      ara[a] = ara[c] % 3 + 1;
      ara[b] = ara[a] % 3 + 1;
    }
    else
    {
      ara[a] = 1;
      ara[b] = 2;
      ara[c] = 3;
    }

  }

  for (i = 1; i <= n; i++)
    cout << ara[i] << " ";



}