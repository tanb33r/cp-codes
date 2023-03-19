
string s,s2;
cin>>s;
while(i<n) {
    if(i<n and s[i]=='0') {
        while(i<n and s[i]=='0')i++;
        s2+='0';
    }
    if(i<n and s[i]=='1') {
        while(i<n and s[i]=='1')i++;
        s2+='1';
    }
}
