#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,a=0,b=0;
	long long s=0;
	cin>>n;
	for(int i=0;i<n;++i) {
		int x;
		cin>>x;
		++a;
		if(x<0) swap(a,b);
		s+=a;
	}
	cout<<1ll*(1+n)*n/2-s<<' '<<s;
}
