#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,x,y,sx,sy,ex,ey;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>x>>y>>sx>>sy>>ex>>ey;
        x+=b-a,y+=d-c;
        cout<<((sx==ex&&(a||b))?"NO":(sy==ey&&(c||d))?"NO":((x<sx||x>ex||y<sy||y>ey)?"NO":"YES"))<<endl;
    }
}
