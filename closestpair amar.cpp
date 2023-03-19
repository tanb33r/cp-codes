// A divide and conquer program in C++
// to find the smallest distance from a
// given set of points.

#include <bits/stdc++.h>
using namespace std;


int compareX(pair<float,float> a, pair<float,float> b) {
    return (a.first < b.first);
}
bool compareY(pair<float,float> a, pair<float,float> b) {
    return (a.second < b.second);
}

float dist(pair<float,float> p1, pair<float,float> p2) {
    return sqrt( (p1.first - p2.first)*(p1.first - p2.first) +
                 (p1.second - p2.second)*(p1.second - p2.second)
               );
}

float bruteForce(vector<pair<float,float> > &P, int n) {
    float min = FLT_MAX;
    for (int i = 0; i < n; ++i)
        for (int j = i+1; j < n; ++j)
            if (dist(P[i], P[j]) < min)
                min = dist(P[i], P[j]);
    return min;
}


float stripClosest(vector<pair<int,int> >  &strip, int size, float d) {
    float min = d;
    sort(strip.begin(), strip.end(),  compareY);

    for (int i = 0; i < size; ++i)
        for (int j = i+1; j < size && (strip[j].second - strip[i].second) < min; ++j)
            if (dist(strip[i],strip[j]) < min)
                min = dist(strip[i], strip[j]);

    return min;
}

float closestUtil(vector<pair<float,float> > &P, int n) {
    if (n <= 3) return bruteForce(P, n);

    int mid = n/2;
    pair<float,float> midPoint = P[mid];

    float dl = closestUtil(P, mid);
    float dr = closestUtil(P + mid, n - mid);

    float d = min(dl, dr);
    vector<pair<float,float> > strip;
    int j = 0;
    for (int i = 0; i < n; i++)
        if (abs(P[i].first - midPoint.first) < d)
            strip.push_back(P[i]), j++;

    return min(d, stripClosest(strip, j, d) );
}

float closest(vector<pair<float,float> > &P, int n) {
    sort(P.begin(), P.end(), compareX);
    return closestUtil(P, n);
}

int main() {
    int n ;
    cin>>n;

    vector<pair<float,float> > P;
    for(int i = 0 ; i< n ; i++) {
        float x,y;
        cin>>x>>y;
        P.push_back(make_pair(x,y));
    }
    cout << "The smallest distance is " << closest(P, n);
}

