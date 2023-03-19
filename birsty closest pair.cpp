#include <bits/stdc++.h>
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"

using namespace std;

bool cmpX(pair<float, float>  a,pair<float, float>  b) {
    return a.first<b.first;
}
bool cmpY(pair<float, float>  a,pair<float, float>  b) {
    return a.second<b.second;
}

float dist(pair<float, float>  p1, pair<float, float>  p2) {
    return sqrt( (p1.first - p2.first)*(p1.first - p2.first) +
                 (p1.second - p2.second)*(p1.second - p2.second)
               );
}

float bruteForce(pair<float, float> P[], int n) {
    float F = FLT_MAX;
    for (int i = 0; i < n; ++i)
        for (int j = i+1; j < n; ++j)
            if (dist(P[i], P[j]) < F)
                F = dist(P[i], P[j]);
    return F;
}

float stripClosest(pair<float, float> P[], int size, float d) {
    float F = d;

    sort(P,P+size,cmpY);

    // Pick all points one by one and try the next points till the difference
    // between y coordinates is smaller than d.
    // This is a proven fact that this loop runs at most 6 times
    for (int i = 0; i < size; ++i)
        for (int j = i+1; j < size;j++)
            if (dist(P[i],P[j]) < F)
                F = dist(P[i], P[j]);
                return F;
            }


float closestUtil(pair<float, float>  P[], int n) {
    if(n<=3) {
        return bruteForce( P,  n);
    }
    // 3 er kom hole amra bruteForce kore distance ber korbo


    int mid = n/2; // mid point is n/2
    pair<float, float> MidPoint = P[mid]; //mid point hoise n/2 tomo point


    float dl = closestUtil(P, mid); //6
    float dr = closestUtil(P+mid, n-mid); //n-mid hoise baki points gula
    float d = min(dl, dr);

    pair<float, float> strip[n];
    //ekhn strip e amra midpoint theke
    //d distance  er point gula boshabo


    int j = 0;

    for (int i = 0; i < n; i++) {
        if( abs(P[i].first   -   MidPoint.first) <d ) {
            // jodi midpoint r oi point er distance
            //d theke kom hoy
            strip[j] = P[i];
            j++;
        }
    }
    //total j ta point ache strip e

    //strip gular nijeder distance ber korbo
    float stripDistance = stripClosest(strip, j, d);
    //stripclosest function is same as bruteforce function
    // just return minimum distance among points


    // the ans would be minimum of strips and D
    return min(d,stripDistance);


}

int main () {
    pair<float, float>  P[] = {{1,3},{2,2},{4,4},{5,1},{6,1},{7,3}};
    int n =4;
    sort(P,P+n,cmpX); //  X er shapekkhe sort korsi
    cout<<closestUtil(P,n); // recursive function er 1st call

//    for(int i =0; i<v.size(); i++) {
//        cout<<v[i].first<<" "<<v[i].second<<"\n";
//    }
//    cout<<"\n";
}

