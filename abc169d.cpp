#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define reus ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int32_t main()
{
	reus;
	int n;
	cin>>n;
	int ans=0;
	for(int i=2;i<1000010;i++)
	{
		int c=0;
		while(n%i==0)
		{
			c++;
			n/=i;
		}
		for(int j=1;j<10000;j++)
		{
			if(c<j)
			break;
			ans++;
			c-=j;
		}
	}
	if(n>1)
	ans++;
	cout<<ans<<endl;
	return 0;
}
