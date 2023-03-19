#include<bits/stdc++.h>
using namespace std;

const int N= 1e5+5;

int main() {

    int a, b, c, d, t=1, n, m;
    cin>>t;
    while(t--) {

        cin>>n;
        priority_queue< pair < int, int > > pq;
        for(int i=1; i<=n; i++) {
            cin>>a;
            pq.push({a,i});
        }

        vector< pair < int, int > > vp;
        while(pq.size()>1) {

            a = pq.top().first;
            b = pq.top().second;
            pq.pop();

            c = pq.top().first;
            d = pq.top().second;

            pq.pop();

            if(a>0 and c>0) {
                vp.push_back({b,d});
                a--;
                c--;
                pq.push({a,b});
                pq.push({c,d});
            } else
                break;
        }
        cout<<vp.size()<<endl;
        for(int i=0; i<vp.size(); i++) {
            cout<<vp[i].first<<' '<<vp[i].second<<endl;
        }

    }

}
