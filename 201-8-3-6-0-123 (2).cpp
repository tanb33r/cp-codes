#include <bits/stdc++.h>
#define  x                  first
#define  y                  second
using namespace std;
typedef pair<int,int> pii;

int sign(pii p, pii q, pii r) {
    int S = (q.y-p.y)*(r.x-q.x)-(q.x-p.x)*(r.y-q.y);
    if (S == 0) return 0;
    return (S > 0)? 1: -1;
}

int main() {
    pii X1 = {1, 1}, X2 = {10, 1}; //1st line
    pii Y1 = {1, 2}, Y2 = {10, 2}; //2nd line
    int s1 = sign(X1, X2, Y1);
    int s2 = sign(X1, X2, Y2);
    int s3 = sign(Y1, Y2, X1);
    int s4 = sign(Y1, Y2, X2);

    cout <<"Lines are ";
    cout <<((s1 != s2 and s3 != s4)?"intersecting\n":"not intersecting\n");

}
