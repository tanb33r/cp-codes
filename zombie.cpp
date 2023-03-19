#include<stdio.h>
using namespace std;
int main()
{
    int t,x,y;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d%d",&x,&y);
    if(x<y)
        printf("NO BRAINS");
    else
        printf("MMM BRAINS");
    }
}
