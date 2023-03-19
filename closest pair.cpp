#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

int cmpx(const void* a, const void* b) {
    Point *p1 = (Point *)a, *p2 = (Point *)b;
//    if()


    return (p1->x - p2->x);
}

int cmpy(const void* a, const void* b) {
    Point *p1 = (Point *)a, *p2 = (Point *)b;
    return (p1->y - p2->y);
}

float dist(Point p1, Point p2) {
    return sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
}

float brute(Point P[], int n) {
    float mini = FLT_MAX;
    for (int i = 0; i < n; ++i)
        for (int j = i+1; j < n; ++j)
            mini = min(mini,dist(P[i], P[j]));
    return mini;
}

//float stripClosest(Point strip[], int S, float d) {
//    float mini = d;
//    qsort(strip, S, sizeof(Point), cmpy);
//    for (int i = 0; i < S; ++i)
//        for (int j = i+1; j < S && (strip[j].y - strip[i].y) < mini; ++j)
//            mini = min(mini,dist(strip[i], strip[j]));
//    return mini;
//}

float closestUtil(Point P[], int n) {
    if (n <= 3) return brute(P, n);

    int mid = n/2;
    Point midPoint = P[mid];
    float sl = closestUtil(P, mid);
    float sr = closestUtil(P + mid, n - mid);
    float d = min(sl, sr);

    Point strip[n];
    int j = 0;
    for (int i = 0; i < n; i++)
        if (abs(P[i].x - midPoint.x) < d)
            strip[j++] = P[i];

//    return min(d, stripClosest(strip, j, d) );
}

float closest(Point P[], int n) {
//    qsort(P, n, sizeof(Point), cmpx);
//    sort(P, P+n, cmpx);
    return closestUtil(P, n);
}

int main() {
    int n ;
    cin>>n;
    Point P[n];
    for(int i = 0 ; i< n ; i++) {
        cin>>P[i].x>>P[i].y;
    }
    cout << "The smallest distance is " << closest(P, n);
}

