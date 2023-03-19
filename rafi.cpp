#include <bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    cin>>n;
    int a[n][3];
    int ME=0; //main erthqk
    for(int i =0  ; i <n ; i++) {
        cin>>a[i][0]>>a[i][1]>>a[i][2];
        // 0 year   1 month     2 day
        if(i>0) {
            if(a[i][0]==a[i][0]) { // same year
                if(a[i][1]==a[i][1]) { //same month
                    if(a[i][2]>a[i][1]+5) {
                        ME = ME+1;
                    }
                }
            }
            else{



            }


        }
