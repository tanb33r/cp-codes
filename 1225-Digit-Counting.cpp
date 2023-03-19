#include <bits/stdc++.h>
using namespace std;

vector<int>v[10000];

void fnc(int x)
{
    v[x]=v[x-1];
    int y=x;
    while(y>0){
        v[x][y%10]++;
        y/=10;
    }
}

int main()
{
    int tc,n;
    scanf("%d",&tc);
    for(int i=0;i<10;i++)
        v[0].push_back(0);
    for(int i=1;i<10000;i++){
        fnc(i);
    }
    while(tc--){
        scanf("%d",&n);
        printf("%d",v[n][0]);
        for(int i=1;i<10;i++)
            printf(" %d",v[n][i]);
        puts("");
    }
    return 0;
}
