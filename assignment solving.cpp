#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int> a,pair<string,int> b) {
    return a.second>b.second;
}

int main() {
    int n;
    cin>>n;
    pair<string,int> Assign[n];
    for(int i = 0 ; i<n ; i++) {
        cin>>Assign[i].first;
    }

    for(int i = 0 ; i<n ; i++) {
        cin>>Assign[i].second;
    }

    sort(Assign,Assign+n,cmp);
    int tot_points=0;
    for(int i = 0 ; i<n ; i++) {
        tot_points+=(Assign[i].second*(n-i-1));
    }


    cout<<"Maximum Point = "<<tot_points<<endl;
    cout<<"Assignment Submission Order = ";
    for(int i = 0 ; i<n ; i++) {
        cout<<Assign[i].first<<" ";
    }
        cout<<endl;
}
