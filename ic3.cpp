#include <bits/stdc++.h>
#define  f(i,n)       for(int i=0; i<n; i++)
#define  ff(i,j,n)    for(int i=int(j);i<=int(n);++i)
#define  sf(i)        scanf("%d",&i)
#define  pf(i)        printf("%d",i)
#define  pb(x)        push_back(x);
#define  in(x)        int x; cin>>x
#define  w(t)         int t; cin>>t; while(t--)
#define  d(x)         cout<<x<<"\n"
#define  endl         "\n"
#define  fopen        freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio       ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  PI           acos(-1.0)
#define  all(v)       v.begin(),v.end()
#define  mem(a,value) memset(a,value,sizeof(a))
#define  vi           vector<int>
#define  fr           first
#define  s            second

typedef long long     ll;
// c
const int mod = 1000000007;
using namespace std;
int n,m;
vector<string>arr;
bool visit[505][505];
int par[505][505];

bool issafe(int i,int j){
	return (i>=0)&&(j>=0)&&(i<n)&&(j<m)&&(!visit[i][j]);
}

void BFS(int x,int y){
	visit[x][y]=1;
	queue<pair<int,int>>q;
	q.push({x,y});
	par[x][y]=0;
	while(!q.empty()){
		pair<int,int>t=q.front();
		q.pop();

		int kk =arr[t.fr][t.s]-'0';
		if(issafe(t.fr+(kk),t.s)){
			q.push({t.fr+(kk),t.s});
			visit[t.fr+(kk)][t.s]=1;
			par[t.fr+(kk)][t.s]=1+par[t.fr][t.s];
		}
		if(issafe(t.fr-(kk),t.s)){
			q.push({t.fr-(kk),t.s});
			visit[t.fr-(kk)][t.s]=1;
			par[t.fr-(kk)][t.s]=1+par[t.fr][t.s];
		}
		if(issafe(t.fr,t.s+(kk))){
			q.push({t.fr,t.s+(kk)});
			visit[t.fr][t.s+(kk)]=1;
			par[t.fr][t.s+(kk)]=1+par[t.fr][t.s];
		}
		if(issafe(t.fr,t.s-(kk))){
			q.push({t.fr,t.s-(kk)});
			visit[t.fr][t.s-(kk)]=1;
			par[t.fr][t.s-(kk)]=1+par[t.fr][t.s];
		}
	}
}
int main(){
	memset(par,-1,sizeof par);
	string s;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		cin>>s;
		arr.push_back(s);
	}
	BFS(0,0);
	printf("%d\n",par[n-1][m-1]);
}
