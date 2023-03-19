#include<bits/stdc++.h>
using namespace std;

int main() {
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    long long area=((x1-x2)*(y2-y3))-((x2-x3)*(y1-y2));
    cout<<"Car will have to go ";

    if(area>0)      cout<<"Left\n";
    else if(area<0) cout<<"Right\n";
    else            cout<<"Straight\n";
}
