#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,a[200004];
void sol(){
	scanf("%d%d",&n,&m);int ans=0;
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	priority_queue<int>p,q;ll s=0;
	for(int i=m+1;i<=n;i++){
		s+=a[i];if(a[i]<0)p.push(-2*a[i]);
		while(s<0)s+=p.top(),p.pop(),ans++;
	}
	s=0;
	for(int i=m;i>1;i--){
		s+=a[i];if(a[i]>0)q.push(a[i]*2);
		while(s>0)s-=q.top(),q.pop(),ans++;
	}
	printf("%d\n",ans);
}
int main(){
	int t;scanf("%d",&t);
	while(t--)sol();
}
