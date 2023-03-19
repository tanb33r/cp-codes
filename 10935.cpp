#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
using namespace std;

int main()
{

    int n, x;
    queue<int> q;

    while (scanf("%d", &n), n)
    {
        f(i,n)
        q.push(i+1);

        printf("Discarded cards:");

        while(q.size()>1)
        {
            printf(" %d", q.front());
            q.pop();
            x = q.front();
            q.pop();
            if (!q.empty())
                printf(",");
            q.push(x);
        }
        printf("\nRemaining card: %d\n", q.front());
		q.pop();
    }
}
