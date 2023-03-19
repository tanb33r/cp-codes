#include <bits/stdc++.h>
using namespace std;
int n,m,x,y,ans,f[1000002],v[1000002],s[1000002];
int find(int x)
{
	return x==f[x]?x:f[x]=find(f[x]);
}
void merge(int x,int y)
{
	if(x<y)swap(x,y);
	v[x]+=v[y];
	f[y]=x;
}
int main()
{
	  scanf("%d%d",&n,&m);
	  for(int i=1;i<=n+1;i++)f[i]=i;
	  for(int i=1;i<=m;i++)
	  {
		    scanf("%d%d",&x,&y);
		    int fx=find(x),fy=find(y);
		    if(fx==fy)v[fx]=1;
		    else merge(fx,fy);
	  }
	  for(int i=1;i<=n;i++)
	  {
	      if(find(i)==i && !v[i]) ans++;
	  }
	  printf("%d\n",ans);
	  return 0;
}
