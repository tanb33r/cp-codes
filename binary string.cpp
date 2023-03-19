int osci(string s) {
    char c = 'X';
    for(int i=0; i<s.size(); i++) {
        if(c==s[i]) continue;
        cnt++;
        c = s[i];
    }
    return cnt;
}

vector<int> V;
int veclen(string s) {
    char c = 'X';
    int l = 0;
    for(int i=0; i<s.size(); i++) {
        if(c==s[i] and ++l) continue;
        V.push_back(l);
        l=0;
        cnt++;
        c = s[i];
    }
    return cnt;
}

string fillup(string s) {
    int i = 0;
    while(s[i]!='?') i++;
    if(i==0) {
        int j = 0;
        while(s[j]=='?') j++;
        for(int k = j; ~k; k--) {
            if(s[k]=='?')
                s[k] = s[k+1]=='1'?'0':'1';
        }
    }
    return s;
}
string calcu(string s) {
    int i = 0;

    int n = s.size();
    f(i,n) {
        if(s[i]=='?')
            s[i] = s[i-1]=='1'?'0':'1';
    }
    return s;
}


int form(int n) {
    if(n==1)return 1;
    return (n*(n+1))/2;

}

/// see 1535c
