#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define ll long long
using namespace std;
vector<ll> tree;

void build(int i, int l,int r){
    if(l==r) {seg[i] = a[l]; return;}

    int mid = (l+r)>>1;
    build(i*2+1,l,mid);
    build(i*2+2,mid+1,r);
    seg[i] = max(seg[i*2+1],seg[i*2+2]);
}

int query(int i, int l,int r){
 if(l<)

}
