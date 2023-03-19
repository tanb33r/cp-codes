vector<int> primefactor(int n) {
    vector<int> arr;
    while(n%2==0) {
        n/=2;
        arr.push_back(2);
    }
    int i=3;
    while(i*i<=n) {
        if(n%i==0) {
            arr.push_back(i);
            n=n/i;
        }
        i+=2;
    }
    if(n>2) {
        arr.push_back(n);
    }
    return arr;
}
