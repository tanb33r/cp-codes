#include<bits/stdc++.h>
#define lli long long int
#define  endl               "\n"
using namespace std;

string binaa(lli n){
    string s;
    lli i = 0;
    while (n > 0) {
        s += (n % 2)+'0';
        n = n / 2;
        i++;
    }
    reverse(s.begin(), s.end());
    return s;
}
void solution(int tc){
    lli num, onecnt=0;
    cin >> num;
    string st = binaa(num);

    for(lli in=0; in<st.size(); in++){
        if(st[in]=='1') onecnt++;
    }

    cout << (num*2)-onecnt << endl;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int tc = 1;
    cin >> tc;
    for(int i=1; i<=tc; i++){
        solution(tc);
    }
    return 0;
}
