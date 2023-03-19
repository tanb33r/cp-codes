#include <bits/stdc++.h>
using namespace std;
void showq(queue<int> gq) {
    queue<int> g = gq;
    while (!g.empty()) {
        cout << ' ' << g.front();
        g.pop();
    }
    cout << '\n';
}
int main() {
    vector<int> v;
    stack<int> sta;
    queue<int> Q;

    for (int i = 0; i <= 10; i++)
        Q.push(i);

//    for (int i = 0; i < v.size(); i++)
//        cout<<Q[i]<<" ";
//    cout<<"\n";
Q.pop();
Q.pop();
Q.pop();

    showq(Q);

}
