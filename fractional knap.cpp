#include <bits/stdc++.h>

using namespace std;
bool compare(pair<double,int> a, pair<int,int>b) {
    double x = a.first/(double)a.second;
    double y = b.first/(double)b.second;
    return x>y;

}
int main () {
    int n = 5;
    int CAP = 60;
    int B[] =  {30, 40, 45, 77, 90};
    int W[] =  {5, 10, 15, 22, 25};
    pair<double,int> arr[n];

    for(int i = 0 ; i<n; i++) {
        arr[i].first = B[i];
        arr[i].second = W[i];
    }

    sort(arr,arr+n,compare);

//    for(int i =0 ; i<n; i++) {
////        cout<<arr[i].first<<" "<<arr[i].second<<endl;
//        cout<<arr[i].first<<" "<<arr[i].second<<"\t"<<arr[i].first/(double)arr[i].second<<endl;
//    }



    double benefit_nisi= 0;
    int W_nisi= 0;
    int i = 0;
    while(W_nisi<CAP) {
        while(arr[i].second>0 && W_nisi<CAP) {
            double ben1 = arr[i].first/(double)arr[i].second;   // per weight benefit
            benefit_nisi += ben1;                               //per weight benefit + kora
            W_nisi++;                                           // 1ta weight + kora

            arr[i].first-=ben1;                                 //per weight benefit - kora
            arr[i].second--;                                    // 1ta weight - kora
        }
        i++;
    }
    cout<<benefit_nisi<<endl;


}
