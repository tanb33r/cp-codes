/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
#define lli long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ALL(x) x.begin(), x.end()
#define print(x) cout<<x<<endl;
#define PI acos(-1.0)
#define nl cout<<"\n"
#define mem(ar, val) memset(ar, val, sizeof(ar))
#define point(x) fixed<<setprecision(x)
#define printcase(n) cout << "Case " << tc << ": " << n <<endl;
#define printcaseii(n, m) cout << "Case " << tc << ": " << n << " " << m <<endl;
#define aInput(ar, n) for(int i=0; i<n; i++)cin>>ar[i];
#define vInput(v, n) for(int i=0; i<n; i++){lli xwq;cin>>xwq;v.push_back(xwq);}
#define input2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cin >> ar[i][j];}}
#define print2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cout << ar[i][j] << " ";}cout<<endl;}
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i]; (i==vec.size()-1? cout<<endl : cout<<" ");}
#define aprint(ar, n) for(int i=0; i<n; i++){cout << ar[i] << " ";}cout<<endl
#define ANUPAM_AKIB ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define execution_time cerr<<endl;int z=30;while(z--){cerr<<'-';}cerr<<endl;cerr<<point(16)<<"**Time -> "<<(double)(clock()-tStart)/CLOCKS_PER_SEC<<"fs"<<endl;
#define INPUT freopen("input.txt", "r", stdin)
#define OUTPUT freopen("output.txt", "w", stdout)
#define umap unordered_map
#define IN input()
#define yo(x) cout<<(#x)<<" = "<<(x)<<endl;
#define ff first
#define ss second
#define VEC vector<lli>
#define sz size()
using namespace std;
const lli inf = INT_MAX;
const int mod = 100000;
lli findLCM(lli a, lli b){return ((a*b)/__gcd(a,b));}
lli input(){lli x; cin >> x; return x;}
int digitCNT(int n){return ceil(log10(n)+0.00000001);}
string to_binary(lli num){if(num==0) return ""; return to_binary(num/2)+to_string(num%2);}
bool isPalindrome(string s){for(int i=0, j=s.size()-1; i<s.size()/2; i++, j--){if(s[i]!=s[j]) return 0;}return 1;}
bool isPrime(lli n){if(n<2){return false;}if(n==2||n==3){return true;}if(n%2==0){return false;}for(lli i=3; i*i<=n; i+=2){if(n%i==0){return false;}}return true;}
bool cmp(lli a, lli b){
    return a>b;
}
bool ispalin(string s) {
    string s2 = s;
    reverse(s.begin(),s.end());
    return s==s2;
}
void solve(lli tc){
    int cnt[5]; //array declaration for counting number of 0 and 1
    cin >> cnt[0] >> cnt[1]; // take input
    string s; //declare string
    cin >> s; // input the string
    for(int i=0; i<s.sz; i++){ //run loop
        if(s[i] != '?') cnt[(s[i]-'0')]--; //remove counts of 0 and 1 that already in the string
    }
    for(int i=0, j=(s.sz-1); i<=j; i++, j--){ //loop from start and end in a same time to check both end
        if(i==j and s[i]=='?'){ //when string len is odd and ? is in the middle of the string
            if(cnt[0]>0){ //check if cnt of zero have
                s[i] = '0'; // make the pos 0
                cnt[0]--; //decrement a zero
            }
            else if(cnt[1]>0){ //otherwise check if cnt of one have
                s[i] = '1'; // make the pos 1
                cnt[1]--; //decrement a 1
            }
            else{
                print(-1) // no solution as we could not replace ? with 0/1
                return;
            }
            break;
        }
        if(s[i] != s[j] && s[i]!='?' && s[j]!='?'){ // both position not equal. 0....1 or 1...0 found
            print(-1) // no solution
            return;
        }
        else if(s[i] == s[j] && s[i]=='?'){  // ? is in both position. we have to place either 0 or 1 in this situation
            if(cnt[0]>=2){ // both postion. so we need two element and remove
                s[i] = s[j] = '0'; // make both pos 0
                cnt[0] -= 2; // remove two zero
            }
            else if(cnt[1]>=2){ // both postion. so we need two element and remove
                s[i] = s[j] = '1'; // make both pos 1
                cnt[1] -= 2; // remove two one
            }
            else{ //no solution as we dont have two element in count of 0 or 1
                print(-1)
                return;
            }
        }
        else if((s[i] == '?' && s[j] == '1') || (s[i] == '1' && s[j] == '?')){ //first er ta ? r last er ta 1 kina or vice versa
            if(cnt[1]>0){ //emn hole 1 ta lagbe. coz baki 1 ta agei bad diye assi upore loop chaliye
                s[i] = s[j] = '1'; //set as 1
                cnt[1]--; //decrement
            }
            else{ // no solution as we dont have 1 ta 1
                print(-1)
                return;
            }
        }
        else if((s[i] == '?' && s[j] == '0') || (s[i] == '0' && s[j] == '?')){ //first er ta ? r last er ta 0 kina or vice versa
            if(cnt[0]>0){ //emn hole 1 ta lagbe. coz baki 1 ta agei bad diye assi upore loop chaliye
                s[i] = s[j] = '0'; //set as 0
                cnt[0]--; //decrement
            }
            else{ // no solution as we dont have 1 ta 0
                print(-1)
                return;
            }
        }
    }
    if(cnt[0]!=0 or cnt[1]!=0) print(-1) // eto kahinir por o jodi count 0 na hoy tarmane answer exist korena



    else if(!ispalin(s)) {
        print(-1);
        return;
    }



    else print(s) //noile s answer hobe
}

int main(){

    lli tc = 1;
    cin >> tc; //TEST CASE
    for(int i=1; i<=tc; i++){
        solve(i);
    }
    /*while(cin >> tc && tc!=-1) solve(tc);*/

}
