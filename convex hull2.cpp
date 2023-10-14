#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};
Point p0;


// 0 --> p, q and r are colinear
// 1 --> Clockwise
// 2 --> Counterclockwise
int distSq(Point p1, Point p2) {
    return (p1.x - p2.x)*(p1.x - p2.x) +
           (p1.y - p2.y)*(p1.y - p2.y);
}

int orientation(Point p, Point q, Point r) {
    int val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);

    return val == 0 ? 0 : val > 0 ? 1: 2;
}

int compare(const void *vp1, const void *vp2) {
    Point *p1 = (Point *)vp1;
    Point *p2 = (Point *)vp2;

    // Find orientation
    int o = orientation(p0, *p1, *p2);
    if (o == 0)
        return (distSq(p0, *p2) >= distSq(p0, *p1))? -1 : 1;

    return (o == 2)? -1: 1;
}
// Prints convex hull of a set of n points.
void convexHull(Point points[], int n) {
    if (n < 3) return;

    vector<Point> hull;

    int l = 0;
    for (int i = 1; i < n; i++)
        if (points[i].y < points[l].y)
            l = i;

    p0 = points[0];




    qsort(&points[1], n-1, sizeof(Point), compare);
    for (int i = 0; i < n; i++) {
        cout << "(" << points[i].x << ", "
             << points[i].y << ")\n";
    }
    swap( points[0],points[l]);
    l = 0;
    int p = 0, q;

    do {
        hull.push_back(points[p]);
        q = (p+1)%n;
        for (int i = 0; i < n; i++)
            if (orientation(points[p], points[i], points[q]) == 2)
                q = i;
        p = q;

    } while (p != l); /
    for (int i = 0; i < hull.size(); i++)
        cout << "(" << hull[i].x << ", "
             << hull[i].y << ")\n";
}

int main() {
//    int n ;
//    cin>>n;
    Point points[] = {{3,1}, {4,4}, {5,-1}, {2,-1}, {2,2}, {2,1},
        {4,-1}, {6,1}, {8,1}, {8,5}, {7,4}, {3,3}
    };
    int n = sizeof(points)/sizeof(points[0]);

    convexHull(points, n);
    return 0;
}

