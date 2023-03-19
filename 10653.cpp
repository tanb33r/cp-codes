#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e3+10;
bool vis[N][N];
#define pii pair<int,int>
int dx[]={0,0,-1,+1};
int dy[]={+1,-1,0,0};
int row,col;
int dist[N][N];

// check is the current cell valid or not
bool isValid(int nx,int ny)
{
    return (nx>=0 && nx<row && ny>=0 && ny<col && vis[nx][ny]!=1);
}

void bfs(int x,int y)
{
    queue<pii> q;
    q.push({x,y});
    vis[x][y]=1;

    while(!q.empty()){
        pii u=q.front();

        //int crn_x=u.first;
        //int crn_y=u.second;

        q.pop();

        for(int k=0;k<4;k++){
            int nx=u.first +dx[k];
            int ny=u.second+dy[k];

            if(isValid(nx,ny)){
                q.push({nx,ny});
                vis[nx][ny]=1;
               // store all distances
                dist[nx][ny]=dist[u.first][u.second]+1;
            }
        }
    }

}

int main(){

    int bombInRow,rowNum,bomb,colNum;

    while(cin>>row>>col){

        if(row==0 && col==0) break;
        cin>>bombInRow;

        memset(dist,0,sizeof(dist));
        memset(vis,0,sizeof(vis));

        for(int i=0;i<bombInRow;i++){

            cin>>rowNum>>bomb;

            for(int j=0;j<bomb;j++){
                cin>>colNum;

                vis[rowNum][colNum]=1;

            }

        }

        int startRow,startcol,endRow,endCol;

        cin>>startRow>>startcol>>endRow>>endCol;

        bfs(startRow,startcol);
        cout<<dist[endRow][endCol]<<"\n";

    }
}
