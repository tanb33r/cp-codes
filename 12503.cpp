#include<bits/stdc++.h>
#include <stdio.h>

using namespace std;
int main()
{
    int T, N, I[101], i, x, j;

    char s[100];

    scanf("%d", &T);

    while (T--)
    {
        i = x = 0;

        scanf("%d", &N);

        while (N--)
        {
            scanf("%s", s);

            if (s[0] == 'L')
            {
                x += I[i] = -1;
            }
            else if (s[0] == 'R')
            {
                x += move[i] = 1;
            }
            else
            {
                scanf("%*s %d", &j);

                x += I[i] = I[j - 1];
            }

            ++i;
        }

        printf("%d\n", x);
    }
}

