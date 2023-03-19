
int  l=0,r=n-1,mid;
while(l<r) {
    mid = (l+r)/2;
    if(check(a,mid)) {
        r=mid-1;
        continue;
    } else {
        l=mid+1;
        continue;
    }
}
